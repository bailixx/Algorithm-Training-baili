#include <stdio.h>

void solve()
{
    long long n = 0;
    scanf("%lld", &n);

    printf("%lld\n", (n - 1) / 2);
}

int main()
{
    int t = 0;
    if (scanf("%d", &t) != 1) return 0;

    while(t--)
    {
        solve();
    }

    return 0;
}