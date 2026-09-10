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
    int x = 0, y = 2000;
    scanf("%d", &x);

    char s[1005];
    sprintf(s, "%d", x);

    int len = strlen(s);

    for(int i = 1; i <= len; i++)
    {
        y = y < (x % 10) ? y : (x % 10);

        x = x / 10;
    }

    printf("%d\n", y);
}
