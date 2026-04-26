#include <stdio.h>
#include <ctype.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    // 权重分配表
    int weight[] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
    // Z 值与校验码 M 的对应关系表
    char check_table[] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};

    int all_passed = 1; // 标记是否全部通过

    for (int i = 0; i < n; i++) {
        char id[20];
        scanf("%s", id);

        int sum = 0;
        int is_numeric = 1;

        // 1. 检查前 17 位是否全为数字并计算加权和
        for (int j = 0; j < 17; j++) {
            if (!isdigit(id[j])) {
                is_numeric = 0;
                break;
            }
            sum += (id[j] - '0') * weight[j];
        }

        // 2. 验证校验码
        if (!is_numeric || check_table[sum % 11] != id[17]) {
            printf("%s\n", id);
            all_passed = 0;
        }
    }

    if (all_passed) {
        printf("All passed\n");
    }

    return 0;
}