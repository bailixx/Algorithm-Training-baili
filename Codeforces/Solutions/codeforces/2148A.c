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
    int x = 0;

    scanf("%d %d", &x, &n);

    if(n % 2 == 0) printf("0\n");
    else if(n % 2 == 1) printf("%d\n", x);
}