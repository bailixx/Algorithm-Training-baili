#include <stdio.h>

int main()
{
    int a,b;
    if(scanf("%d %d", &a,&b) != 2) return 0;

    int num, sum, max;

    max = a > b ? a : b;
    num = a < b ? a : b;
    sum = (max - num) / 2;

    printf("%d %d", num, sum);

    return 0;
}