#include <stdio.h>

int main()
{
    int n;
    if (scanf("%d", &n) != 1) return 0;
    
    if (n % 2 == 0)
    {
        printf("4 %d\n", n - 4);
    }
    else
    {
        printf("9 %d\n", n - 9);
    }
    
    return 0;
}