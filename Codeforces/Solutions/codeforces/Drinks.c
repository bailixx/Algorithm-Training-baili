#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    double sum = 0;

    for (int i = 0; i < n; i++)
    {
        int p;
        scanf("%d", &p);

        sum += p;
    }

    double result = sum / n;

    printf("%.12f\n", result);

    return 0;
}