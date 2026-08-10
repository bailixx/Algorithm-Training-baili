#include <stdio.h>

void solve()
{
    int n, k;
    scanf("%d %d", &n, &k);

    int found = 0;
    
    for (int i = 0; i < n; i++)
    {
        int a;
        scanf("%d", &a);
        
        if (a == k)
        {
            found = 1;
        }
    }

    if (found)
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