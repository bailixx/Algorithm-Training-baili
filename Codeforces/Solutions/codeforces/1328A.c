#include <stdio.h>

int main() {
    int t;
    // 1. 读入测试用例数量 t
    if (scanf("%d", &t) == 1) {
        while (t--) {
            long long a, b;
            // 2. 读入 a 和 b
            // 虽然 10^9 在 int 范围内，但在计算中用 long long 更稳妥
            scanf("%lld %lld", &a, &b);
            
            // 3. 核心数学逻辑
            if (a % b == 0) {
                printf("0\n");
            } else {
                // 下一个能整除 b 的数减去现在的 a，就是步数
                printf("%lld\n", b - (a % b));
            }
        }
    }
    return 0;
}