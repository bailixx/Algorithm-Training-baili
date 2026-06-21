#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int max = a;
    max = max > (b>c?b:c) ? max : (b>c?b:c);

    printf("%d", max*2);

    return 0;
}