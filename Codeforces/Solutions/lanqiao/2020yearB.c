#include <stdio.h>

int main()
{
    int n,m,i;
    scanf("%d%d",&n,&m);
    for(i=0;i<m;i++)
    {
        int a,b,c;
        scanf("%d%d",&a,&b);
        if(a==b)
        {
            printf("0\n");
        }
        else
        {
            while(1)
            {
                c=b%a;
                if(c==0)
                {
                    if(a=1)
                    {
                        printf("1\n");
                        break;
                    }
                    else
                    {
                        printf("2\n");
                        break;
                    }
                }
                b=a;
                a=c;
            }
        }
    }
    return 0;
}