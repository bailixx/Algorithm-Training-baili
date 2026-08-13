#include <stdio.h>
#include <string.h>

void solve();

int main()
{
    int t = 0;
    if(scanf("%d",&t) != 1)  return 0;

    while(t--)
    {
        solve();
    }

    return 0;
}

void solve()
{
    char s1[10], s2[10];
    scanf("%s %s", s1,s2);

    int temp = 0;
    temp = s1[0];
    s1[0] = s2[0];
    s2[0] = temp;

    printf("%s %s\n", s1,s2);
}