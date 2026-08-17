#include <stdio.h>

void solve()
{
    int x, y, n;
    scanf("%d %d %d", &x, &y, &n);

    int max_k = ((n - y) / x) * x + y;

    printf("%d\n", max_k);
}

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