#include <stdio.h>

void solve();

int main()
{
    int t = 0;
    if(scanf("%d", &t) != 1) return 0;

    while(t--)
    {
        solve();
    }

    return 0;
}

void solve()
{
    int n = 0;
    scanf("%d", &n);

    int a[105];
    int minus_count = 0;
    int ans = 0;

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

        if(a[i] == -1) minus_count++;
    }

    while(minus_count > n / 2)
    {
        minus_count--;
        ans++;
    }

    if(minus_count % 2 == 1)
    {
        ans++;
    }

    printf("%d\n", ans);
}