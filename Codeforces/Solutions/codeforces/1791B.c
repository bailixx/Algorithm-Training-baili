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
    int n = 0;
    scanf("%d", &n);

    int x = 0, y = 0;
    int found = 0;

    char s[55];
    scanf("%s", s);

    for(int i = 0; i < n; i++)
    {
        if(s[i] == 'U') y++;
        if(s[i] == 'D') y--;
        if(s[i] == 'L') x--;
        if(s[i] == 'R') x++;

        if(x==1 && y==1)
        {
            found = 1;

            break;
        }
    }

    if(found == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}