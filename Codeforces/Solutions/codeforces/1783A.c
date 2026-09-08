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
    int n;
    scanf("%d", &n);
    
    int a[55];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    if(a[0] == a[n - 1])
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
        printf("%d ", a[n - 1]);
    
        for(int i = 0; i < n - 1; i++)
        {
            printf("%d ", a[i]);
        }
        printf("\n");
    }
}