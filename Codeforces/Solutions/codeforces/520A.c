#include <stdio.h>
#include <string.h>
#include <ctype.h> // 必须包含这个头文件来使用 tolower

int main() {
    int n;
    char s[105];
    int mark[26] = {0}; // 记录 26 个字母是否出现过
    int count = 0;

    // 1. 读入长度和字符串
    if (scanf("%d", &n) == 1) {
        scanf("%s", s);

        // 2. 长度小于 26 直接排除
        if (n < 26) {
            printf("NO\n");
            return 0;
        }

        // 3. 遍历字符串并标记
        for (int i = 0; i < n; i++) {
            // 不管是大写还是小写，统一转成小写
            char c = tolower(s[i]);
            // 将 'a'-'z' 映射到索引 0-25
            int index = c - 'a';
            
            // 如果这个字母没被标记过，就标记并让总数加 1
            if (mark[index] == 0) {
                mark[index] = 1;
                count++;
            }
        }

        // 4. 判断最后不同的字母是否达到了 26 个
        if (count == 26) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}