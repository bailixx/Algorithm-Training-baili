#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    int steps = x / 5;

    if (x % 5 > 0)
    {
        steps++;
    }

    printf("%d\n", steps);

    return 0;
}