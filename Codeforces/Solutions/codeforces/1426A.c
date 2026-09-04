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
    int n, x;
    scanf("%d %d", &n, &x);

    if(n <= 2) printf("1\n");
    if(n > 2)
    {
        int num = (n-2+x-1) / x + 1;

        printf("%d\n", num);
    }
}