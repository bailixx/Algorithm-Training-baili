#include <stdio.h>

int main() {
    int h, m;
    // 使用 %d:%d 直接跳过中间的冒号，读入小时和分钟
    if (scanf("%d:%d", &h, &m) != 2) return 0;

    // 1. 判断是否在不敲钟区间 (00:00 - 12:00)
    if (h < 12 || (h == 12 && m == 0)) {
        // 注意输出格式，小时和分钟需要补零，使用 %02d
        printf("Only %02d:%02d.  Too early to Dang.\n", h, m);
    } 
    // 2. 敲钟区间
    else {
        int count = h - 12;
        // 如果过了整点，敲钟次数加一
        if (m > 0) {
            count++;
        }

        // 循环输出相应数量的 Dang
        for (int i = 0; i < count; i++) {
            printf("Dang");
        }
        printf("\n");
    }

    return 0;
}