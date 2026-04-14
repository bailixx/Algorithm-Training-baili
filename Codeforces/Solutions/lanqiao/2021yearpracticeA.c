#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c,m,t;
    scanf("%d\n",&t);
    for(int i=0;i<t;i++)
    {
    scanf("%d%d%d",&a,&b,&c);
    m = a+b+c;
    printf("%d\n",m);
    }
}