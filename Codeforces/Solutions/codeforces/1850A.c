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
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);

    int min = 0;
    min = a < (b < c ? b : c) ? a : (b < c ? b : c);
    
    if ((a+b+c-min) >= 10)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}