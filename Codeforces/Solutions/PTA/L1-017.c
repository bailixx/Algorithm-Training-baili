#include <stdio.h>
#include <string.h>

int main() {
    char s[60]; // 50位整数，开60足够安全
    if (scanf("%s", s) != 1) return 0;

    int len = strlen(s);
    int count2 = 0;
    int digit_len = len; // 实际参与除法的位数
    double neg_factor = 1.0;
    double even_factor = 1.0;

    // 1. 判断正负
    int start = 0;
    if (s[0] == '-') {
        neg_factor = 1.5;
        digit_len = len - 1; // 减去负号占的那一位
        start = 1;
    }

    // 2. 统计 '2' 的个数
    for (int i = start; i < len; i++) {
        if (s[i] == '2') {
            count2++;
        }
    }

    // 3. 判断奇偶 (看字符串最后一位)
    int last_digit = s[len - 1] - '0';
    if (last_digit % 2 == 0) {
        even_factor = 2.0;
    }

    // 4. 计算结果
    double result = (double)count2 / digit_len * neg_factor * even_factor * 100.0;

    // 5. 格式化输出
    printf("%.2f%%\n", result);

    return 0;
}