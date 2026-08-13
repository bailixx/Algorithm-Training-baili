#include <stdio.h>
#include <string.h>

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
    char s[4];
    scanf("%s", s);

    if (s[0] == 'a' || s[1] == 'b' || s[2] == 'c')
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}