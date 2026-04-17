#include <stdio.h>

int main()
{
    int n = 0;
    if (scanf("%d", &n) != 1) return 0;

    int sum = 2;

    for (int i = 0; i < n-1; i++)
    {
        sum *= 2;
    }

    printf("2^%d = %d", n, sum);

    return 0;
}