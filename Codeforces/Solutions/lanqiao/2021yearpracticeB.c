#include <stdio.h>

int main()
{
    int a,t,i;
    scanf("%d\n",&t);

    for(i=0;i<t;i++)
    {
        scanf("%d\n",&a);

        int sum;
        sum = a + 1946;
        printf("%d\n",sum);
    }
}