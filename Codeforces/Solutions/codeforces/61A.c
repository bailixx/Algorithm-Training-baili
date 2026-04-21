#include <stdio.h>
#include <string.h>

int main() {
    char s1[105], s2[105];
    
    // 1. 读入两个字符串
    // scanf 会自动停在空格或换行符，所以可以连续读两个
    if (scanf("%s %s", s1, s2) == 2) {
        int len = strlen(s1); // 获取字符串长度
        
        // 2. 逐位比较并输出
        for (int i = 0; i < len; i++) {
            if (s1[i] != s2[i]) {
                printf("1");
            } else {
                printf("0");
            }
        }
        printf("\n"); // 最后记得换行，符合 CF 输出规范
    }
    
    return 0;
}