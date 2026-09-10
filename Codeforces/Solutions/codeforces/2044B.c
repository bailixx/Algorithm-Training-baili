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
    char a[105], b[105];
    scanf("%s", a);

    int len = strlen(a);
    int j = 0; 

    for(int i = len - 1; i >= 0; i--)
    {
        if(a[i] == 'p')
        {
            b[j] = 'q';
        }
        else if(a[i] == 'q')
        {
            b[j] = 'p';
        }
        else
        {
            b[j] = 'w';
        }
        
        j++; 
    }

    b[len] = '\0';
    printf("%s\n", b);
}