#include<stdio.h>

int main()
{
    int n = 0;
    int a, b;
    if (scanf("%d", &n) != 1) return 0;

    int water = 0;
    int forest = 0;
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);

        if (water != a)
        {
            ans++;
            water = a;
            forest = b;
        }

        if (water == a && forest == b)
        {
            continue;
        }

        if (water == a && forest != b)
        {
            ans++;
            forest = b;
        }
    }

    printf("%d", ans);

    return 0;
}