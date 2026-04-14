#include <stdio.h>

struct Point {
    int x, y;
};

int main()
{
    int N, M;

    if (scanf("%d %d", &N, &M) != 2) return 0;
    
    int a[205][205];
    int dist[205][205]; // 记录到每个格子的最少步数
    
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &a[i][j]);
            dist[i][j] = -1; // 初始化为 -1，表示没走过
        }
    }
    
    int x1, y1, x2, y2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    
    // 因为你的循环是从 0 开始的，而题目坐标通常从 1 开始，所以需要减 1
    x1--; y1--; x2--; y2--;
    
    // BFS 队列逻辑
    struct Point queue[40005]; // 200*200 的地图，队列开到 40000 足够
    int head = 0, tail = 0;
    
    // 起点入队
    queue[tail++] = (struct Point){x1, y1};
    dist[x1][y1] = 0;
    
    // 方向数组：上、下、左、右
    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};
    
    while (head < tail) {
        struct Point curr = queue[head++];
        
        // 如果到了终点，就没必要再搜了
        if (curr.x == x2 && curr.y == y2) break;
        
        for (int i = 0; i < 4; i++) {
            int nx = curr.x + dx[i];
            int ny = curr.y + dy[i];
            
            // 边界检查：必须在 N 和 M 的范围内
            // 通路检查：a[nx][ny] 必须等于 1
            // 访问检查：dist[nx][ny] 必须等于 -1
            if (nx >= 0 && nx < N && ny >= 0 && ny < M && a[nx][ny] == 1 && dist[nx][ny] == -1) {
                dist[nx][ny] = dist[curr.x][curr.y] + 1;
                queue[tail++] = (struct Point){nx, ny};
            }
        }
    }
    
    // 输出终点步数。如果没搜到，dist[x2][y2] 依然是 -1
    printf("%d\n", dist[x2][y2]);
    
    // 比赛要求：必须保证返回 0 [cite: 75]
    return 0;
}
