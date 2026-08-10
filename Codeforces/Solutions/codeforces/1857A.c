#include <stdio.h>

void solve()
{
    int n;
    scanf("%d", &n);

    int odd_count = 0;

    for (int i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);

        if (num % 2 != 0)
        {
            odd_count++;
        }
    }

    if (odd_count % 2 == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}

int main()
{
    int t;
    if (scanf("%d", &t) != 1) return 0;

    while (t--)
    {
        solve();
    }

    return 0;
}