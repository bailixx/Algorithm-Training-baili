#include <stdio.h>
#include <string.h>

void solve();

int main()
{
    int t;
    if(scanf("%d", &t) != 1) return 0;

    while(t--)
    {
        solve();
    }

    return 0;
}

void solve()
{
    char c;
    scanf(" %c", &c);

    if (strchr("codeforces", c) != NULL)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}