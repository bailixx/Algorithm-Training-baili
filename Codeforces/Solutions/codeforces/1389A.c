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
    int l,r;
    scanf("%d %d", &l, &r);

    int x,y;

    if(2*l <= r)
    {
        printf("%d %d\n", l,2*l);
    }
    else
    {
        printf("-1 -1\n");
    }
}