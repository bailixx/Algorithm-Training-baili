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

    char s[105];
    scanf("%s", s);

    char max_char = 'a'; 

    for(int i = 0; i < n; i++)
    {
        if(s[i] > max_char)
        {
            max_char = s[i];
        }
    }

    printf("%d\n", max_char - 'a' + 1);
}