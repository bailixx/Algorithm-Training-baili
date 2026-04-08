#include <stdio.h>

int main() 
{
    int i,count=0,a;
    for(i=1;i<=2025;i++)
    {
        a=i%10;
        a=a*a*a;
        a=a%10;
        if(a==3)
            count++;
    }
    printf("%d",count);
    return 0;
}