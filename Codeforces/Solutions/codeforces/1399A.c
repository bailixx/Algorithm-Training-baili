#include <stdio.h>

void solve()
{
    int n;
    scanf("%d", &n);
    
    int a[55];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    
    for (int i = 1; i < n; i++)
    {
        if (a[i] - a[i-1] > 1)
        {
            printf("NO\n");
            return;
        }
    }
    
    printf("YES\n");
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