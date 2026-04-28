#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void k()
{
    int n;
    if (scanf("%d", &n) != 1) return;

    int *a = malloc(n * sizeof(int));
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int c = 0; 
    
    for (int i = 0; i < n - 1; i++)
    {
        int d = abs(a[i] - a[i+1]); 
        
        if (a[i] % d == 0)
        {
            c++;
        }
    }

    printf("%d\n", c);
    
    free(a);
}

int main()
{
    int t;
    if (scanf("%d", &t) != 1) return 0;
    
    while (t--)
    {
        k();
    }
    return 0;
}