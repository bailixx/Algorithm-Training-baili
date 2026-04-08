#include <stdio.h>

long long a[100005]; 

int bitCount(long long x) {
    int count = 0;
    while (x > 0) {
        x = x & (x - 1); 
        count++;
    }
    return count;
}

int main() 
{
    int n = 0;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }

    int m = 0;
    scanf("%d", &m);

    for (int step = 0; step < m; step++)
    {
        for (int i = 0; i < n; i++)
        {
            a[i] = a[i] * bitCount(a[i]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%lld ", a[i]);
    }
    printf("\n");

    return 0;
}