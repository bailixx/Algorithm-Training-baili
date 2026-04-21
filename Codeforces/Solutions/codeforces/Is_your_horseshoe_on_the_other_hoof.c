#include <stdio.h>

int main() {
    int s[4];
    int i, j, temp;
    int count = 0;

    // 1. 读入 4 个蹄铁的颜色编号
    for (i = 0; i < 4; i++) {
        scanf("%d", &s[i]);
    }

    // 2. 简单的冒泡排序（只有 4 个数，瞬间排完）
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3 - i; j++) {
            if (s[j] > s[j + 1]) {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }

    // 3. 统计有多少个重复的数字
    // 如果相邻的两个数相等，说明这是一个重复的颜色，需要买一个新的来替换
    for (i = 0; i < 3; i++) {
        if (s[i] == s[i + 1]) {
            count++;
        }
    }

    // 4. 输出结果
    printf("%d\n", count);

    return 0;
}