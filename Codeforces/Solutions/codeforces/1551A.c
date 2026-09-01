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
    int n;
    scanf("%d", &n);

    int c1 = n / 3;
    int c2 = n / 3;

    if (n % 3 == 1)
    {
        c1 += 1;
    }
    else if (n % 3 == 2)
    {
        c2 += 1;
    }

    printf("%d %d\n", c1, c2);
}