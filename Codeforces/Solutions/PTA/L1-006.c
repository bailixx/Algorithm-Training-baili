#include <stdio.h>
#include <math.h>

int main()
{
    long long n;
    if (scanf("%lld", &n) != 1) return 0;

    int max_len = 0;
    long long start_factor = 0;

    for (long long i = 2; i * i <= n; i++)
    {
        long long product = 1;

        for (long long j = i; ; j++)
        {
            product *= j;
    
            if (n % product != 0) break;

            int current_len = j - i + 1;

            if (current_len > max_len)
            {
                max_len = current_len;
                start_factor = i;
            }
        }
    }

    if (max_len == 0)
    {
        printf("1\n%lld\n", n);
    }
    else
    {
        printf("%d\n", max_len);
        
        for (int i = 0; i < max_len; i++)
        {
            printf("%lld%c", start_factor + i, (i == max_len - 1) ? '\n' : '*');
        }
    }

    return 0;
}