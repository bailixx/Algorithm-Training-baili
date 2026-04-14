#include <stdio.h>
#include <string.h>

int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        char name[3*n+1][21];
        for(int i=0;i<3*n;i++)
        {
            char s[21];
            int rank;
            scanf("%s %d",s,&rank);
            strcpy(name[rank],s);
        }
        for(int a=0;a<n;a++)
        {
            int r1=3*a+3;
            int r2=3*a+2;
            int r3=3*a+1;
            printf("ACM-%d %s %s %s\n",a,name[r1],name[r2],name[r3]);
        }
    }
    return 0;
}
strcpy(name[rank],s);
for(int i=0;i<3*n;i++)
{
    char s[21];
    int rank;
    scanf("%s %d",s,&rank);
    strcpy(name[rank],s);
}