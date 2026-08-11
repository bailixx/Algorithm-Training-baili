#include <stdio.h>

int main()
{
    int n = 0;
    if (scanf("%d", &n) != 1) return 0;

    int a[1000005];
    int max = 0;

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        max = max > a[i] ? max : a[i];
    }

    int total_spend = 0;
    
    for (int i = 0; i < n; i++)
    {
        total_spend += (max - a[i]);
    }
    
    printf("%d\n", total_spend);

    return 0;
}
