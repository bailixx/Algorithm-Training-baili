#include <stdio.h>
#include <string.h>

void solve()
{
    char s[105];
    scanf("%s", s);
    
    int len = strlen(s);
    
    if (len % 2 != 0)
    {
        printf("NO\n");
        return;
    }
    
    int half = len / 2;
    for (int i = 0; i < half; i++)
    {
        if (s[i] != s[i + half])
        {
            printf("NO\n");
            return;
        }
    }
    
    printf("YES\n");
}

int main()
{
    int t;
    if (scanf("%d", &t) == 1)
    {
        while (t--)
        {
            solve();
        }
    }
    return 0;
}