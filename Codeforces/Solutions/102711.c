#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}


int x[50005];
int y[50005];

int main() 
{
    int n = 0;

    if (scanf("%d", &n) != 1) return 0;

    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &x[i]);
    }

    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &y[i]);
    }

    qsort(x, n, sizeof(int), cmp);
    qsort(y, n, sizeof(int), cmp);

    long long min_len = 0;

    for (int i = 0; i < n; i++) 
    {
        min_len += abs(x[i] - y[i]);
    }

    printf("%lld\n", min_len);

    return 0;
}