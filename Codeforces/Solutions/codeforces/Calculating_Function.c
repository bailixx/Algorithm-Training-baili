#include <stdio.h>

int main()
{
    long long int n;
    scanf("%lld", &n);

    long long int f;

    if (n % 2 == 1)
    {
        f = -((n + 1) / 2);
    }
    else
    {
        f = n / 2;
    }

    printf("%lld", f);

    return 0;
}