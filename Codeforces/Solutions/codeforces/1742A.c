#include <stdio.h>

void solve();

int main()
{
    int t = 0;
    if (scanf("%d", &t) != 1) return 0;

    while(t--)
    {
        solve();
    }

    return 0;
}

void solve()
{
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);

    if (a + b == c || a + c == b || b + c == a) 
    {
        printf("YES\n");
    }
    else 
    {
        printf("NO\n");
    }
}