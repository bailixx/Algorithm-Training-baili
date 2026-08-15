#include <stdio.h>
#include <string.h>

void solve()
{
    char b[105];
    scanf("%s", b);
    
    int len = strlen(b);
    
    for (int i = 0; i < len; i += 2)
    {
        printf("%c", b[i]);
    }
    
    printf("%c\n", b[len - 1]);
}

int main()
{
    int t;
    if (scanf("%d", &t) != 1) return 0;
    
    while (t--)
    {
        solve();
    }
    
    return 0;
}