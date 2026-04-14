#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    int a[1005];
    int ans = 0;

    if (scanf("%d", &n) != 1) return 0;

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);

        if (i % 2 == 0)
        {
            ans += a[i];
        }
    }

    printf("%d", ans);

    return 0;
}