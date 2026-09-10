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
    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);
    int num = 0;

    if(b >= a*2)
    {
        num = a * n;
    }
    else
    {
        num = (n/2) * b + a * (n%2);
    }

    printf("%d\n", num);
}