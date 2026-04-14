#include <stdio.h>

#define MAXN 405
// 定义一个极其巨大的数作为无穷大，1e18 不会撑爆 long long，且两数相加也不会溢出
const long long INF = 1e18; 

long long dist[MAXN][MAXN]; // 邻接矩阵：存任意两点间的距离

// 自己写一个求最小值的宏函数
long long min(long long a, long long b) 
{
    return a < b ? a : b;
}

int main() 
{
    int N, M, Q;
    // 穿好防弹衣读入
    if (scanf("%d %d %d", &N, &M, &Q) != 3) return 0;

    // ================= 步骤 1：重置地图 =================
    for (int i = 1; i <= N; i++) 
    {
        for (int j = 1; j <= N; j++) 
        {
            if (i == j) dist[i][j] = 0; // 自己到自己的距离是 0
            else dist[i][j] = INF;      // 其他地方一开始都是无法到达的（无穷大）
        }
    }

    // ================= 步骤 2：修建道路 =================
    for (int i = 0; i < M; i++) 
    {
        int u, v;
        long long w;
        scanf("%d %d %lld", &u, &v, &w);
        
        // 【防坑指南】：无向图，且防备重边！只收留最短的那条路！
        if (w < dist[u][v]) 
        {
            dist[u][v] = w;
            dist[v][u] = w; // 因为是双向走的道路，所以互相都要打通
        }
    }

    // ================= 步骤 3：核心大招 Floyd 算法 =================
    // 逻辑：如果 从 i 走到 k，再从 k 走到 j，比直接从 i 到 j 更近，就更新最短路！
    for (int k = 1; k <= N; k++)          // k 是"中转站"，这层循环必须放在最外面！
    {
        for (int i = 1; i <= N; i++)      // i 是起点
        {
            for (int j = 1; j <= N; j++)  // j 是终点
            {
                // 如果 i 能走到中转站 k，且中转站 k 能走到终点 j
                if (dist[i][k] != INF && dist[k][j] != INF) 
                {
                    // 看看是直接走近，还是绕道 k 比较近？
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }
    }

    // ================= 步骤 4：回答小明的查询 =================
    for (int i = 0; i < Q; i++) 
    {
        int st, ed;
        scanf("%d %d", &st, &ed);
        
        // 如果查完地图，发现距离依然是初始化的无穷大，说明彻底没路
        if (dist[st][ed] == INF) 
        {
            printf("-1\n");
        } 
        else 
        {
            printf("%lld\n", dist[st][ed]); // 注意 long long 的打印符是 %lld
        }
    }

    return 0;
}