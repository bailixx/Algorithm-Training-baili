#include <stdio.h>

int main()
{
    long long a,b;
    scanf("%lld%lld",&a,&b);

    if(b>a)
    {
        int t = a;
        a = b;
        b = t;
    }

    for(int i=1;;i++)
    {
        if((a*i)%b == 0)
        {
            printf("%lld",a*i);
            break;
        }
    }
    return 0;

}