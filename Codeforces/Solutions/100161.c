#include <stdio.h>

int main()
{
    long long n = 0;
    
    if (scanf("%lld", &n) != 1) return 0;

    long long sum = 1;

    long long mod = 1000000007;

    for (long long i = 1; i <= n; i++)
    {
        sum = (sum * i) % mod; 
    }

    printf("%lld\n", sum);

    return 0;
}