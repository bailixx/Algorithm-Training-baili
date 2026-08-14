#include <stdio.h>

void solve()
{
    long long a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);
    
    if (c % 2 == 0)
    {
        if (a > b)
        {
            printf("First\n");
        }
        else
        {
            printf("Second\n");
        }
    }
    else 
    {
        if (a >= b)
        {
            printf("First\n");
        }
        else
        {
            printf("Second\n");
        }
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