#include <stdio.h>

int main()
{
    int t = 0;
    if (scanf("%d", &t) != 1) return 0;

    int a,b,c;

    while(t--)
    {
        scanf("%d %d %d", &a,&b,&c);

        if (a + b == c)
        {
            printf("+\n");
        } 
        else
        {
            printf("-\n");
        }
    }
    return 0;
}