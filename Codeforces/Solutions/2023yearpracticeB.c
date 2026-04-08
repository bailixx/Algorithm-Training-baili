#include <stdio.h>
#include <stdlib.h>
int n;
double x[205],y[205],k,b,k1,d1;
int pd()
{
    int count=0;
    for(int i=1; i<=n; i++)
    {
        if(k*x[i]+b==y[i])
            count++;
    }
    return count;
}
int main()
{
    int max=-1;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%lf%lf",&x[i],&y[i]);
    }
    for(int i=1; i<n; i++)
        for(int j=i+1; j<=n; j++)
        {
            if((x[i]==x[j])&&(y[i]==y[j]))
            {
                k=0.0000;
                b=0.0000;
                if(pd()>max)
            {
                k1=k;
                d1=b;
                max=pd();
            }

            }
            k=(y[i]-y[j])/(x[i]-x[j]);
            b=y[i]-k*x[i];
            if(pd()>max)
            {
                k1=k;
                d1=b;
                max=pd();
            }
        }
    printf("%.4lf %.4lf",k1,d1);

}
