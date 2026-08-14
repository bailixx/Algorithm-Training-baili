#include <stdio.h>

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

int main()
{
    int y, w;
    scanf("%d %d", &y,&w);

    int max = 0;
    max = y > w ? y : w;

    int num = 0;
    num = 6 - max + 1;

    int common_divisor = gcd(num,6);

    printf("%d/%d\n", num / common_divisor, 6 / common_divisor);

    return 0;
}