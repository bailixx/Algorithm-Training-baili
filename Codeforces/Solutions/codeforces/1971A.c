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
    int x,y;
    scanf("%d %d", &x, &y);

    int max, min;

    max = x > y ? x : y;
    min = x < y ? x : y;

    printf("%d %d\n", min,max);
}