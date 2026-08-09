#include <stdio.h>

int main()
{
    int t = 0;
    if (scanf("%d", &t) != 1) return 0;

    int n = 0;
    int sum = 0;

    while(t--)
    {
        scanf("%d", &n);
        sum = (n / 10) + (n % 10);
        printf("%d\n", sum);
    }

    return 0;
}