#include <stdio.h>

int main()
{
    int a, b;

    while (scanf("%d %d", &a, &b) != EOF && (a != 0 || b != 0))
    {
        printf("%d\n", a + b);
    }

    return 0;
}

//题目说：“输入若干对整数，当输入为 0 0 时结束”。