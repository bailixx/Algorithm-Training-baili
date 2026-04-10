#include <stdio.h>
#include <math.h>

int is_square(long long n)
{
    if (n < 0) return 0;
    long long r = (long long)(sqrt(n) + 0.5); 
    return r * r == n;
}
int is_cube(long long n)
{
    long long r = (long long)(pow(n, 1.0/3.0) + 0.5);
    return r * r * r == n;
}

int main()
{
    int n;
    if (scanf("%d", &n) != 1) return 0;

    while (n--)
    {
        long long z;
        scanf("%lld", &z);

        int is_double = 0;
        int is_triple = 0;

        if (z % 2 == 0 && is_square(z / 2))
        {
            is_double = 1;
        }

        if (is_double && z % 3 == 0 && is_cube(z / 3))
        {
            is_triple = 1;
        }

        if (is_triple)
        {
            printf("%lld is a triple flower\n", z);
        } else if (is_double)
        {
            printf("%lld is a double flower\n", z);
        } else
        {
            printf("%lld is %lld\n", z, z);
        }
    }
    return 0;
}