#include <stdio.h>

void solve()
{
    int n;
    scanf("%d", &n);
    
    printf("%d\n", n / 2);
}

int main()
{
    int t;
    if (scanf("%d", &t) != 1) return 0;
    
    while (t--)
    {
        solve();
    }
    
    return 0;
}