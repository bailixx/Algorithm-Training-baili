#include <stdio.h>
#include <stdbool.h>

#define MAXN 300005
#define MAXM 1000005
const long long INF = 1e18; // 无穷大防爆

// ================= 绝招一：链式前向星（极致省内存的存图法） =================
int head[MAXN];          // 存每个起点的第一条边
int to[MAXM];            // 存每条边的终点
int nxt[MAXM];           // 存下一条相同起点的边
long long weight[MAXM];  // 存边的距离
int edge_cnt = 0;        // 边的编号计数器

void add_edge(int u, int v, long long w) 
{
    edge_cnt++;
    to[edge_cnt] = v;          // 记录这条边去哪
    weight[edge_cnt] = w;      // 记录这条边多长
    nxt[edge_cnt] = head[u];   // 极其精妙的头插法：新边指向旧的头
    head[u] = edge_cnt;        // 更新头指针
}

// ================= 绝招二：手搓优先队列（小根堆） =================
typedef struct {
    int node;       // 建筑编号
    long long dist; // 到这个建筑的距离
} HeapNode;

HeapNode heap[MAXM * 2];
int heap_size = 0;

void swap(HeapNode *a, HeapNode *b) {
    HeapNode temp = *a; *a = *b; *b = temp;
}

// 往雷达里丢数据：每次插在最后，然后一点点往上浮，保持最近的永远在最上面
void push(int node, long long dist) 
{
    heap[++heap_size] = (HeapNode){node, dist};
    int now = heap_size;
    while (now > 1 && heap[now].dist < heap[now / 2].dist) {
        swap(&heap[now], &heap[now / 2]);
        now /= 2;
    }
}

// 从雷达里掏出最近的数据：拿走最上面的，把最后一个填补上来，然后一点点往下沉
HeapNode pop() 
{
    HeapNode top = heap[1];
    heap[1] = heap[heap_size--];
    int now = 1;
    while (now * 2 <= heap_size) {
        int next = now * 2;
        if (next + 1 <= heap_size && heap[next + 1].dist < heap[next].dist) {
            next++;
        }
        if (heap[now].dist <= heap[next].dist) break;
        swap(&heap[now], &heap[next]);
        now = next;
    }
    return top;
}

// ================= 绝招三：Dijkstra 核心逻辑 =================
long long dist[MAXN]; // 记录最终的最短距离
bool vis[MAXN];       // 记录哪些建筑的距离已经“盖章确认”了

int main() 
{
    int n, m;
    if (scanf("%d %d", &n, &m) != 2) return 0; // 读取 N 和 M

    // 1. 初始化战场
    for (int i = 1; i <= n; i++) {
        dist[i] = INF;
        vis[i] = false;
        head[i] = 0;
    }

    // 2. 读入单向道路
    for (int i = 0; i < m; i++) {
        int u, v;
        long long w;
        scanf("%d %d %lld", &u, &v, &w);
        add_edge(u, v, w); // 把边塞进链式前向星里
    }

    // 3. 从皇宫（1号节点）出发！
    dist[1] = 0;
    push(1, 0); // 把起点丢进雷达

    while (heap_size > 0) 
    {
        // 从雷达里掏出当前绝对最近的节点
        HeapNode top = pop();
        int u = top.node;

        // 【防坑核心】：如果这个点之前已经确定过了，直接跳过！
        if (vis[u]) continue; 
        vis[u] = true; // 盖章确认：u 点的最短距离已经无懈可击了

        // 顺藤摸瓜，遍历 u 点连出去的所有道路
        for (int e = head[u]; e != 0; e = nxt[e]) 
        {
            int v = to[e]; // 邻居节点
            long long w = weight[e]; // 这条路的距离

            // 如果借道 u 走过去，比原来的距离更短
            if (dist[u] + w < dist[v]) 
            {
                dist[v] = dist[u] + w; // 更新最短记录
                push(v, dist[v]);      // 把新记录扔进雷达里排队
            }
        }
    }

    // 4. 打印最终结果
    for (int i = 1; i <= n; i++) {
        if (dist[i] == INF) printf("-1 "); // 如果发现根本过不去，输出 -1
        else printf("%lld ", dist[i]);     // 否则输出距离
    }
    printf("\n");

    return 0;
}