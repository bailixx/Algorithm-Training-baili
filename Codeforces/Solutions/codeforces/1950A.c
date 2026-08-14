#include <stdio.h>
#include <string.h>

void solve();

int main()
{
    int t = 0;
    if(scanf("%d",&t) != 1) return 0;

    while(t--)
    {
        solve();
    }

    return 0;
}

void solve()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    if (a < b && b < c)
    {
        printf("STAIR\n");
    } 

    else if (a < b && b > c)
    {
        printf("PEAK\n");
    } 

    else
    {
        printf("NONE\n");
    }
}