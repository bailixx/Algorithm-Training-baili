#include <stdio.h>
#include <stdlib.h>

// 1. 定义一个结构体来存“道路”
typedef struct {
    int u, v;       // 起点和终点
    long long w;    // 修路的开销
} Edge;

Edge edges[300005]; // 最多 30 万条路
int parent[100005]; // 并查集：用来存每个小区的“大哥”

// C语言标准库 qsort 需要的比较函数：教它怎么按价格从低到高排序
int cmp(const void *a, const void *b) 
{
    Edge *e1 = (Edge *)a;
    Edge *e2 = (Edge *)b;
    // 如果 e1 比 e2 便宜，排在前面
    if (e1->w < e2->w) return -1;
    if (e1->w > e2->w) return 1;
    return 0;
}

// 2. 并查集核心绝招一：找终极大哥（带路径压缩）
int find(int x) 
{
    // 如果我的大哥就是我自己，说明我就是大当家！
    if (parent[x] == x) {
        return x;
    }
    // 【神级优化：路径压缩】顺藤摸瓜找到大当家后，直接把自己的指针绑到大当家身上！
    // 下次再问，直接一步到位，速度无限逼近 O(1)
    parent[x] = find(parent[x]); 
    return parent[x];
}

// 3. 并查集核心绝招二：合并帮派
// 返回 1 表示合并成功（修路成功），返回 0 表示已经是自己人（拒绝修路）
int union_set(int x, int y) 
{
    int rootX = find(x);
    int rootY = find(y);
    
    if (rootX != rootY) 
    {
        parent[rootX] = rootY; // X 的大哥拜 Y 的大哥为师
        return 1;
    }
    return 0; // 已经是同门师兄弟了
}

int main() 
{
    int n, m;
    if (scanf("%d %d", &n, &m) != 2) return 0;

    // 读入所有修路方案
    for (int i = 0; i < m; i++) 
    {
        scanf("%d %d %lld", &edges[i].u, &edges[i].v, &edges[i].w);
    }

    // 极其关键：全场大比价，按开销升序排列！
    qsort(edges, m, sizeof(Edge), cmp);

    // 初始化并查集：一开始，所有人的大哥都是自己
    for (int i = 1; i <= n; i++) 
    {
        parent[i] = i;
    }

    long long total_cost = 0; // 记账本（一定要用 long long）
    int edge_count = 0;       // 记录咱们到底修了几条路

    // 抠门老板开始遍历每一条路
    for (int i = 0; i < m; i++) 
    {
        // 尝试合并这条路两端的小区
        if (union_set(edges[i].u, edges[i].v)) 
        {
            // 如果成功合并（不在同一个帮派）
            total_cost += edges[i].w; // 乖乖掏钱
            edge_count++;             // 修路数量 +1

            // 见好就收：N 个点只需要 N-1 条路就能全部连通
            if (edge_count == n - 1) 
            {
                break;
            }
        }
    }

    // 最后验收工程：查一下有没有修够 N-1 条路
    if (edge_count == n - 1) 
    {
        printf("%lld\n", total_cost); // 完美完工
    } 
    else 
    {
        printf("-1\n"); // 钱花光了或者全城根本连不通
    }

    return 0;
}