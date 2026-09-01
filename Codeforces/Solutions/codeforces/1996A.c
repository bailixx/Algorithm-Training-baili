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
    scanf("%d", &n);

    if(n < 4) 
    {
        printf("%d\n", n/2);
    }
    else
    {
        int c1 = n / 4;
        int c2 = n % 4 / 2;
        int num = c1 + c2;

        printf("%d\n", num);
    }
    
}