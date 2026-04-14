#include <stdio.h>

int calc2 (int x)
{
    int sum = 0;
    while (x)
    {
        sum += x % 2;
        x /= 2;
    }
    return sum;
}

int calc4 (int x)
{
    int sum = 0;
    while (x)
    {
        sum += x % 4;
        x /= 4;
    }
    return sum;
}

int main()
{
    int res = 0;

    for (int i = 1; i <= 2024; i++)
    {
        if (calc2(i) == calc4(i))
        {
            res++;
        }
    }

    printf("%d", res);

    return 0;
}