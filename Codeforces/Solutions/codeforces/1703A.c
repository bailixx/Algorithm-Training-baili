#include <stdio.h>
#include <ctype.h>

void solve();

int main()
{
    int t = 0;
    if(scanf("%d",&t) != 1) return 0;

    while(t--)
    {
        solve();
    }
}

void solve()
{
    char s[5];
    scanf("%s",s);

    if(toupper(s[0]) == 'Y' && toupper(s[1]) == 'E' && toupper(s[2]) == 'S')
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}