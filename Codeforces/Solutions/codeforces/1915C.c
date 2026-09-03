#include <stdio.h>
#include <math.h>

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
    int n = 0;
    scanf("%d", &n);

    long long sum = 0;

    for (int i = 0; i < n; i++)
    {
        long long val;
        scanf("%lld", &val); 
        
        sum += val; 
    }

    long long root = sqrt(sum); 

    if (root * root == sum)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}