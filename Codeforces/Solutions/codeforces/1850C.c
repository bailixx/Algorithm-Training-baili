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
    char s[8][9];
    for(int i = 0; i < 8; i++)
    {
        scanf("%s", s[i]);
    }

    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            if(s[i][j] >= 'a' && s[i][j] <= 'z')
            {
                printf("%c", s[i][j]);
            }
        }
    }

    printf("\n");
}