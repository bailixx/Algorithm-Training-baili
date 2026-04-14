#include <stdio.h>

char map[1005][1005];
int R, C;

// DFS 深度优先搜索：用来把整艘船“抹掉”
void dfs(int x, int y) {
    if (x < 0 || x >= R || y < 0 || y >= C || map[x][y] == '.') return;
    
    map[x][y] = '.'; // 标记为已访问过（变成水）
    
    // 向四个方向扩散
    dfs(x + 1, y);
    dfs(x - 1, y);
    dfs(x, y + 1);
    dfs(x, y - 1);
}

int main() {
    if (scanf("%d %d", &R, &C) != 2) return 0;

    for (int i = 0; i < R; i++) {
        scanf("%s", map[i]);
    }

    // 第一步：检查 Bad placement
    // 检查每一个 2x2 的小方格
    for (int i = 0; i < R - 1; i++) {
        for (int j = 0; j < C - 1; j++) {
            int count = 0;
            if (map[i][j] == '#') count++;
            if (map[i+1][j] == '#') count++;
            if (map[i][j+1] == '#') count++;
            if (map[i+1][j+1] == '#') count++;
            
            if (count == 3) {
                printf("Bad placement.\n");
                return 0;
            }
        }
    }

    // 第二步：数船的数量
    int ship_count = 0;
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (map[i][j] == '#') {
                ship_count++;
                dfs(i, j); // 发现一艘船，就用 DFS 把这艘船所有的部分都变成水
            }
        }
    }

    printf("There are %d ships.\n", ship_count);

    return 0;
}