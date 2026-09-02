#include <stdio.h>

int main()
{
    int n = 0;
    if(scanf("%d", &n) != 1) return 0;

    int k = n / 2;
    printf("%d\n", k);
    
    if (n % 2 == 0)
    {
        for (int i = 0; i < k; i++)
        {
            printf("2 ");
        }
    } 
    else
    {
        for (int i = 0; i < k - 1; i++)
        {
            printf("2 ");
        }
        printf("3 ");
    }
    printf("\n");

    return 0;
}