#include <stdio.h>

void solve();

int main()
{
    int t = 0;
    if(scanf("%d",&t) != 1) return 0;
    
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
    
    printf("%d\n", (n + 1) / 2);
}