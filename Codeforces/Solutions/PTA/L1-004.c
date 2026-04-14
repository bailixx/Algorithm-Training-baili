#include <stdio.h>

int main()
{
    int f, c;

    if (scanf("%d", &f) != 1) return 0;

    c = 5 * (f - 32) / 9;

    printf("Celsius = %d\n", c);

    return 0;
}