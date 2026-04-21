#include <stdio.h>

int main() {
    int n;
    // 1. 读入层数
    if (scanf("%d", &n) == 1) {
        
        for (int i = 1; i <= n; i++) {
            // 2. 根据奇偶性判断是 hate 还是 love
            if (i % 2 != 0) {
                printf("I hate");
            } else {
                printf("I love");
            }

            // 3. 判断是输出 "that" 还是结尾的 "it"
            if (i == n) {
                printf(" it");
            } else {
                printf(" that ");
            }
        }
        printf("\n"); // 习惯性换行，符合 CF 规范
    }

    return 0;
}