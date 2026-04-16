#include <stdio.h>

long long gcd(long long a, long long b)
{
    if (a < 0) a = -a; 
    if (b < 0) b = -b;
    while (b)
    {
        a %= b;
        long long temp = a;
        a = b;
        b = temp;
    }
    return a;
}

int main()
{
    int n;
    if (scanf("%d", &n) != 1) return 0;

    long long sum_a = 0, sum_b = 1; 

    for (int i = 0; i < n; i++)
    {
        long long a, b;
        scanf("%lld/%lld", &a, &b);

        sum_a = sum_a * b + a * sum_b;
        sum_b = sum_b * b;

        long long common = gcd(sum_a, sum_b);
        sum_a /= common;
        sum_b /= common;
    }

    long long integer = sum_a / sum_b; 
    long long remainder = sum_a % sum_b;

    if (integer != 0)
    {
        printf("%lld", integer);
        if (remainder != 0) printf(" "); 
    }

    if (remainder != 0)
    {
        printf("%lld/%lld", remainder, sum_b);
    } 
    else if (integer == 0)
    {
        printf("0");
    }
    printf("\n");

    return 0;
}