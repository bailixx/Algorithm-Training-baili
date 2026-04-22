#include <stdio.h>

int main()
{
    long long n = 0;
    if (scanf("%lld", &n) != 1) return 0;

    int a[5] = {100, 20, 10, 5, 1};
    int count = 0;

    for (int i = 0; i < 5; i++)
    {
        count += n / a[i];

        n %= a[i];
    }

    printf("%d\n", count);

    return 0;
}