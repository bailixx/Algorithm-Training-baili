#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);

    int num = 0;

    if (n % 3 == 0)
    {
        printf("%d\n", num = n / 3);
    }
    else if (n % 3 != 0)
    {
        printf("%d\n", num = n / 3 + 1);
    }

    return 0;
}