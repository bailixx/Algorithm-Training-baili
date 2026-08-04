#include <stdio.h>

int main()
{
    int n, k;
    if(scanf("%d %d",&n,&k) != 2) return 0;

    int make_time = 240 - k;

    int num = 0;
    int count = 0;

    for (int i = 1; i < n+1; i++)
    {
        num += 5*i;
        if (make_time >= num)
        {
            count++;
        }
        else
        {
            break;
        }
    }

    printf("%d", count);

    return 0;
}