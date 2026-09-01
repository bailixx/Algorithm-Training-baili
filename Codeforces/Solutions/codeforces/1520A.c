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
    char s[55];
    scanf("%s", s);
    
    int seen[26] = {0}; 
    
    seen[s[0] - 'A'] = 1; 
    
    for (int i = 1; i < n; i++)
    {
        if (s[i] != s[i - 1])
        {
            if (seen[s[i] - 'A'] == 1)
            {
                printf("NO\n");
                return;
            }
            
            seen[s[i] - 'A'] = 1;
        }
    }
    
    printf("YES\n");
}