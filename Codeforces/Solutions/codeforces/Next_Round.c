#include <stdio.h>

int main()
{
    int n,k;

    scanf("%d %d",&n,&k);

    int a[55];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    int cutoff_score = a[k-1];

    int count = 0;

    for (int i=0;i<n;i++)
    {
        if(a[i]>=cutoff_score && a[i]>0)
        {
            count++;
        }
    }

    printf("%d\n", count);


    return 0;



}