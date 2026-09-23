#include <stdio.h>

int main()
{
    int n;
    if (scanf("%d", &n) != 1) return 0;

    if (n % 2 != 0)
    {
        printf("-1\n");
    }
    else
    {
        for (int i = 1; i <= n; i += 2)
        {
            printf("%d %d ", i + 1, i);
        }
        printf("\n");
    }

    return 0;
}