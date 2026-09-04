#include <Stdio.h>

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

    char s[505][5];

    for (int i = 0; i < n; i++)
    {
        scanf("%s", s[i]);
    }

    for (int i = n - 1; i >= 0; i--)
    {
        for(int j = 0; j < 4; j++)
        {
            if(s[i][j] == '#')
            {
                printf("%d ", j+1);
            }
        }
    }

    printf("\n");
}