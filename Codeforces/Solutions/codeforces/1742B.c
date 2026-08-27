#include <stdio.h>

void solve()
{
    int n;
    scanf("%d", &n);
    
    int a[105];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                printf("NO\n");
                return;
            }
        }
    }
    
    printf("YES\n");
}

int main()
{
    int t;
    if (scanf("%d", &t) == 1)
    {
        while (t--)
        {
            solve();
        }
    }
    return 0;
}