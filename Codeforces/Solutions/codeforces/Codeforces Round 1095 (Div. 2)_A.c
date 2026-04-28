#include <stdio.h>

void k()
{
    int n;
    if (scanf("%d", &n) != 1) return;

    long long s = 0;
    int p = -1; 
    int q = -1; 

    for (int i = 0; i < n; i++)
    {
        long long v;
        scanf("%lld", &v);

        if (v == 1)
        {
            p = i; 
        }
        else
        {
            q = i;
            s = (s + v) % 676767677;
        }
    }
     
    if (p > q)
    {
        s = (s + 1) % 676767677;
    }

    printf("%lld\n", s);
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