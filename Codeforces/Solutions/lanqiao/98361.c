#include <stdio.h>

int calc (int x)
{
    return x * (x - 1) / 2;
}

int main()
{
    int n = calc(50) - calc(7);

    printf("%d", n);

    return 0;
}