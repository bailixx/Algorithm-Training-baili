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
    
    int a[15];
    
    int min_index = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

        if (a[i] < a[min_index])
        {
            min_index = i;
        }
    }
    
    a[min_index]++;
    
    long long max_product = 1;

    for (int i = 0; i < n; i++)
    {
        max_product *= a[i];
    }
    
    printf("%lld\n", max_product);
}