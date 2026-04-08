#include <stdio.h>

int main()
{
    int T, a, b;

    scanf("%d", &T); // 先读总组数
    
    while (T--)
    {    // 循环 T 次
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
    }
    return 0;
}

//题目第一行会给一个整数T，代表后面有T组数据