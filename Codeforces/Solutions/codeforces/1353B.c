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
    int n, k;
    scanf("%d %d", &n, &k);
    
    int a[35], b[35];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < n; i++) scanf("%d", &b[i]);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j+1])
            {
                int temp = a[j]; a[j] = a[j+1]; a[j+1] = temp;
            }
        }
    }
    
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (b[j] < b[j+1])
            {
                int temp = b[j]; b[j] = b[j+1]; b[j+1] = temp;
            }
        }
    }
    
    for (int i = 0; i < k; i++)
    {
        if (b[i] > a[i])
        {
            a[i] = b[i];
        }
        else
        {
            break; 
        }
    }
    
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    
    printf("%d\n", sum);
}