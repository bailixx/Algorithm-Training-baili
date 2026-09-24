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
    int x1, x2, x3;
    scanf("%d %d %d", &x1, &x2, &x3);

    int max = 0;
    int min = 0;

    max = x1 > (x2 > x3 ? x2 : x3) ? x1 : (x2 > x3 ? x2 : x3);
    min = x1 < (x2 < x3 ? x2 : x3) ? x1 : (x2 < x3 ? x2 : x3);

    printf("%d\n", max-min);
}