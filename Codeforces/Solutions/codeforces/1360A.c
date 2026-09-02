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
    int a, b;
    scanf("%d %d", &a, &b);

    int max = 0;;
    int min = 0;
    int sum = 0;

    min = a < b ? a : b;
    max = (a > b ? a : b) > min*2 ? (a > b ? a : b) : min*2;

    sum = max * max;

    printf("%d\n", sum);
}