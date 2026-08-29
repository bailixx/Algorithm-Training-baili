#include <stdio.h>

int main()
{
    int t = 0;
    if(scanf("%d",&t) != 1) return 0;

    int h,m;

    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &h, &m);

        int num = 0;

        if(m == 0)
        {
            num = (24 - h) * 60;

            printf("%d\n", num);
        }

        if (m != 0)
        {
            num = (23 - h) * 60 + (60 - m);

            printf("%d\n", num);
        }
        
    }
    
    return 0;
}
