#include <stdio.h>

int main()
{
    int n = 0;
    if(scanf("%d", &n) != 1) return 0;

    if(n % 2 == 0)
    {
        printf("Mahmoud\n");
    }
    else
    {
        printf("Ehab\n");
    }


    return 0;
}