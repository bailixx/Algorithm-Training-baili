#include <stdio.h>
#include <stdlib.h>

int h(const void *p, const void *q)
{
    long long x = *(const long long *)p;
    long long y = *(const long long *)q;

    if (x < y) return 1;
    if (x > y) return -1;

    return 0;
}

void k()
{
    int n, m;
    if (scanf("%d %d", &n, &m) != 2) return;

    long long *b = malloc(n * sizeof(long long));
    long long *c = malloc(n * sizeof(long long));
    int d = 0, e = 0;
    long long s = 0;

    for (int i = 1; i <= n; i++)
    {
        long long v;
        scanf("%lld", &v);

        s += v;

        if (i % 2 != 0) b[d++] = v;
        else c[e++] = v;
    }

    int f = 0, g = 0;

    for (int i = 0; i < m; i++)
    {
        int x;
        scanf("%d", &x);
        if (x % 2 != 0) f++;
        else g++;
    }

    qsort(b, d, sizeof(long long), h);
    qsort(c, e, sizeof(long long), h);

    long long z = 0;
    
    int u = (f < d) ? f : d;
    for (int i = 0; i < u; i++)
    {
        if (i == 0)
        {
            z += b[i]; 
        }

        else if (b[i] > 0)
        {
            z += b[i]; 
        }
    }

    int w = (g < e) ? g : e;

    for (int i = 0; i < w; i++)
    {
        if (i == 0)
        {
            z += c[i]; 
        }
        else if (c[i] > 0)
        {
            z += c[i]; 
        }
    }

    printf("%lld\n", s - z);

    free(b);
    free(c);
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