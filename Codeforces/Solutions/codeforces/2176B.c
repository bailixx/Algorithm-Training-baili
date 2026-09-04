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
    int n;
    scanf("%d", &n);

    char s[25], t[25];
    scanf("%s %s", s, t);

    int count[256] = {0}; 

    for (int i = 0; i < n; i++)
    {
        count[s[i]]++; 
        count[t[i]]--; 
    }

    int is_possible = 1;

    for (int i = 'a'; i <= 'z'; i++)
    {
        if (count[i] != 0)
        {
            is_possible = 0;
            break;
        }
    }

    if (is_possible)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}