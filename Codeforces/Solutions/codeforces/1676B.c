#include <stdio.h>

void solve()
{
    int n;
    scanf("%d", &n);
    
    int min_val = 10000005;
    long long total_sum = 0;
    
    for (int i = 0; i < n; i++)
    {
        int candies;
        scanf("%d", &candies);
        
        total_sum += candies;
        
        if (candies < min_val)
        {
            min_val = candies;
        }
    }

    long long eaten = total_sum - (long long)n * min_val;
    
    printf("%lld\n", eaten);
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