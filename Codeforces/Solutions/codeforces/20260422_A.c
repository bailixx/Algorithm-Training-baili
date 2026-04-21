#include <stdio.h>

int main()
{
    int t = 0;
    if (scanf("%d", &t) != 1) return 0;

    long long x = 0, y = 0;

    int ans = 0;

    for (int i = 0; i < t; i++)
    {
        scanf("%lld %lld", &x, &y);

        if (y / x > 2)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}