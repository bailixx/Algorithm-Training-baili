#include <stdio.h>
#include <stdbool.h>

#define MAXN 1005
#define MAXM 100005
const int INF = 1e9; // 10亿，足够充当无穷大了

// ================= 绝招一：双向链式前向星 =================
int head_f[MAXN], to_f[MAXM], wt_f[MAXM], nxt_f[MAXM], cnt_f = 0; // 正向图（用于 A*）
int head_b[MAXN], to_b[MAXM], wt_b[MAXM], nxt_b[MAXM], cnt_b = 0; // 反向图（用于倒推 Dijkstra）

void add_edge_f(int u, int v, int w) {
    cnt_f++; to_f[cnt_f] = v; wt_f[cnt_f] = w; nxt_f[cnt_f] = head_f[u]; head_f[u] = cnt_f;
}
void add_edge_b(int u, int v, int w) {
    cnt_b++; to_b[cnt_b] = v; wt_b[cnt_b] = w; nxt_b[cnt_b] = head_b[u]; head_b[u] = cnt_b;
}

// ================= 绝招二：反向 Dijkstra 的雷达 =================
typedef struct { int u, d; } DNode;
DNode d_heap[MAXM];
int d_sz = 0;

void d_swap(DNode *a, DNode *b) { DNode t = *a; *a = *b; *b = t; }
void d_push(int u, int d) {
    d_heap[++d_sz] = (DNode){u, d};
    int now = d_sz;
    while (now > 1 && d_heap[now].d < d_heap[now/2].d) {
        d_swap(&d_heap[now], &d_heap[now/2]); now /= 2;
    }
}
DNode d_pop() {
    DNode res = d_heap[1]; d_heap[1] = d_heap[d_sz--];
    int now = 1;
    while (now * 2 <= d_sz) {
        int next = now * 2;
        if (next + 1 <= d_sz && d_heap[next+1].d < d_heap[next].d) next++;
        if (d_heap[now].d <= d_heap[next].d) break;
        d_swap(&d_heap[now], &d_heap[next]); now = next;
    }
    return res;
}

// ================= 绝招三：正向 A* 搜索的雷达 =================
typedef struct { int u, g, f; } ANode; // g是已走步数，f是综合评分
ANode a_heap[2000005]; // A*的雷达需要足够大，因为一个点可能会进去很多次
int a_sz = 0;

void a_swap(ANode *a, ANode *b) { ANode t = *a; *a = *b; *b = t; }
void a_push(int u, int g, int f) {
    a_heap[++a_sz] = (ANode){u, g, f};
    int now = a_sz;
    while (now > 1 && a_heap[now].f < a_heap[now/2].f) {
        a_swap(&a_heap[now], &a_heap[now/2]); now /= 2;
    }
}
ANode a_pop() {
    ANode res = a_heap[1]; a_heap[1] = a_heap[a_sz--];
    int now = 1;
    while (now * 2 <= a_sz) {
        int next = now * 2;
        if (next + 1 <= a_sz && a_heap[next+1].f < a_heap[next].f) next++;
        if (a_heap[now].f <= a_heap[next].f) break;
        a_swap(&a_heap[now], &a_heap[next]); now = next;
    }
    return res;
}

// 变量准备
int dist[MAXN]; // 存反向 Dijkstra 算出的 h(x)
bool vis[MAXN]; 
int pop_cnt[MAXN]; // 记录每个点被弹出来的次数

int main() 
{
    int N, M;
    if (scanf("%d %d", &N, &M) != 2) return 0;
    
    // 读入地图，正反向同时修路
    for (int i = 0; i < M; i++) {
        int u, v, w;
        scanf("%d %d %d", &u, &v, &w);
        add_edge_f(u, v, w); 
        add_edge_b(v, u, w); // 注意：反向图的起点终点是颠倒的
    }
    
    int S, T, K;
    scanf("%d %d %d", &S, &T, &K);

    // ================= 步骤 1：倒跑 Dijkstra 拿“上帝视角” =================
    for (int i = 1; i <= N; i++) { dist[i] = INF; vis[i] = false; pop_cnt[i] = 0; }
    dist[T] = 0; 
    d_push(T, 0); // 从终点 T 倒着出发
    
    while (d_sz > 0) {
        DNode top = d_pop();
        int u = top.u;
        if (vis[u]) continue;
        vis[u] = true;
        for (int e = head_b[u]; e != 0; e = nxt_b[e]) {
            int v = to_b[e], w = wt_b[e];
            if (dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                d_push(v, dist[v]);
            }
        }
    }

    // 防坑：如果上帝视角发现 T 连 S 都倒推不到，说明此路彻底不通
    if (dist[S] == INF) {
        printf("-1\n");
        return 0;
    }

    // ================= 步骤 2：正向 A* 寻找第 K 短路 =================
    // 初始状态：起点为S，已走步数 g=0，综合评分 f = 0 + dist[S]
    a_push(S, 0, dist[S]); 
    
    while (a_sz > 0) {
        ANode top = a_pop();
        int u = top.u;
        int g = top.g;

        pop_cnt[u]++; // 这个点被弹出来的次数 +1

        // 【绝杀时刻】：如果弹出来的是终点，且刚好是第 K 次！
        if (u == T && pop_cnt[u] == K) {
            printf("%d\n", g);
            return 0; // 收工下班！
        }
        
        // 剪枝优化：如果一个点已经被弹出来超过 K 次，它绝对不可能再成为去往终点第 K 短路的桥梁了，直接跳过
        if (pop_cnt[u] > K) continue; 

        // 顺藤摸瓜找邻居
        for (int e = head_f[u]; e != 0; e = nxt_f[e]) {
            int v = to_f[e], w = wt_f[e];
            // 只有当邻居能够走到终点时，才把它加入雷达（排雷）
            if (dist[v] != INF) {
                // 新的 g = 原来的 g + 刚走的距离 w
                // 新的 f = 新的 g + 邻居到终点的上帝距离 dist[v]
                a_push(v, g + w, g + w + dist[v]);
            }
        }
    }

    // 如果雷达都弹空了，还没抓够 K 次，说明凑不齐
    printf("-1\n");
    return 0;
}