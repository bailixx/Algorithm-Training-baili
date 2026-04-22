#include <stdio.h>

int main() {
    int n;
    // 读入士兵总数
    if (scanf("%d", &n) != 1) return 0;

    int heights[105];
    int max_val = 0, min_val = 101;
    int max_idx = 0, min_idx = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &heights[i]);

        // 找最左边的最大值：用 > 即可，只记录第一个遇到的
        if (heights[i] > max_val) {
            max_val = heights[i];
            max_idx = i;
        }

        // 找最右边的最小值：用 <=，这样会不断更新到最后一个
        if (heights[i] <= min_val) {
            min_val = heights[i];
            min_idx = i;
        }
    }

    // 计算总步数
    // max_idx 是挪到开头的步数
    // (n - 1 - min_idx) 是挪到结尾的步数
    int ans = max_idx + (n - 1 - min_idx);

    // 如果最大值的初始位置在最小值的右边，说明挪动中两人会交叉
    if (max_idx > min_idx) {
        ans--; // 交叉的那一步帮两人都进了一步，所以减去重复计数的 1
    }

    printf("%d\n", ans);

    return 0;
}