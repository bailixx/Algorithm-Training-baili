#include <stdio.h>

int main()
{
    int t = 0;
    if(scanf("%d",&t) != 1) return 0;

    int a,b;

    while(t--)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n", b - a);
    }

    return 0;
}