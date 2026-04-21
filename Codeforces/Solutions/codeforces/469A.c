#include <stdio.h>

int main() {
    int n, p, q, level;
    int mark[105] = {0}; // 标记数组，记录每一关是否有人能过
    int total_passed = 0;

    // 1. 读入总关数 n
    if (scanf("%d", &n) == 1) {
        
        // 2. 处理小 X 的关卡
        scanf("%d", &p);
        for (int i = 0; i < p; i++) {
            scanf("%d", &level);
            if (mark[level] == 0) {
                mark[level] = 1;
                total_passed++; // 只有第一次标记时才增加计数
            }
        }

        // 3. 处理小 Y 的关卡
        scanf("%d", &q);
        for (int i = 0; i < q; i++) {
            scanf("%d", &level);
            if (mark[level] == 0) {
                mark[level] = 1;
                total_passed++;
            }
        }

        // 4. 判断结果
        if (total_passed == n) {
            printf("I become the guy.\n");
        } else {
            printf("Oh, my keyboard!\n");
        }
    }

    return 0;
}