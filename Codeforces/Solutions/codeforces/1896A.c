#include <stdio.h>

void solve()
{
    int n;
    scanf("%d", &n);
    
    int a[15];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    if (a[0] == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
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