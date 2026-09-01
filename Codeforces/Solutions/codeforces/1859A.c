#include <stdio.h>

void solve()
{
    int n;
    scanf("%d", &n);
    
    int a[105];
    int min_val = 1e9 + 7;
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] < min_val)
        {
            min_val = a[i];
        }
    }
    
    int count_min = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == min_val)
        {
            count_min++;
        }
    }
    
    if (count_min == n)
    {
        printf("-1\n");
        return;
    }
    
    printf("%d %d\n", count_min, n - count_min);
    
    for (int i = 0; i < n; i++)
    {
        if (a[i] == min_val)
        {
            printf("%d ", a[i]);
        }
    }
    printf("\n");
    
    for (int i = 0; i < n; i++)
    {
        if (a[i] != min_val)
        {
            printf("%d ", a[i]);
        }
    }
    printf("\n");
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