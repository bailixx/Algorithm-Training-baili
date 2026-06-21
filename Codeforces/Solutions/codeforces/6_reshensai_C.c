#include <stdio.h>

void s()
{
    int n = 0;
    if (scanf("%d", &n) != 1) return 0;

    int k = 0;
    for (int i = 0; i <= n; i++)
    {
        int v = 0;
        scanf("%d", &v);

        if (i - v == k)
        {
            k++;
        }
    }

    printf("%d", k);
}

int main()
{
    int T = 0;
    if (scanf("%d", &T) == 1)
    {
        while(T--)
        {
            s();
        }
    }

    return 0;
}