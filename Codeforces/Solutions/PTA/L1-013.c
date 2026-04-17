#include <stdio.h>

int main()
{
    int n = 0;
    if (scanf("%d", &n) != 1) return 0;

    int sum = 0;
    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact *= i; 
        
        sum += fact;
    }

    printf("%d\n", sum);

    return 0;
}