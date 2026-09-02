#include <stdio.h>

void solve();

int main()
{
    int t = 0;
    if(scanf("%d", &t) != 1) return 0;

    while(t--)
    {
        solve();
    }

    return 0;
}

void solve()
{
    int s1,s2,s3,s4;
    scanf("%d %d %d %d", &s1,&s2,&s3,&s4);

    int max1,max2,min1,min2;

    max1 = s1 > s2 ? s1 : s2;
    min1 = s1 < s2 ? s1 : s2;
    max2 = s3 > s4 ? s3 : s4;
    min2 = s3 < s4 ? s3 : s4;

    if ((max1 > min2) && (max2 > min1))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}