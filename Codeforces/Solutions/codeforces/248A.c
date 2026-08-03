#include <stdio.h>

int main()
{
    int n = 0;
    if (scanf("%d", &n) != 1) return 0;

    int h[35], a[35];
    for(int i = 0; i < n; i++)
    {
        scanf("%d %d", &h[i],&a[i]);
    }

    int count = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i != j)
            {
                if(h[i] == a[j])
                {
                    count++;
                }
            }
        }
    }

    printf("%d\n", count);

    return 0;
}