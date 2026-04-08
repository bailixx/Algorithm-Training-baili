#include <stdio.h>

int main()
{
    int a, b;
    // 直接读取
    if (scanf("%d %d", &a, &b) != EOF)
    {
        printf("%d\n", a + b);
    }

    return 0;
}

//读取一组数据，使用模板