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
    int x, k;
    scanf("%d %d", &x, &k);
    
    if (x % k != 0)
    {
        printf("1\n");
        printf("%d\n", x);
    }

    else
    {
        printf("2\n");
        printf("%d 1\n", x - 1);
    }
}