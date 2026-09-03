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
    long long n, k;
    scanf("%lld %lld", &n, &k);

    if(n % 2 == 0)
    {
        printf("YES\n");
    }

    if(n % 2 == 1)
    {
        if((n-k) % 2 == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}