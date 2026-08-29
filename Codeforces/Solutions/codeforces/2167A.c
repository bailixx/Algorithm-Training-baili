#include <stdio.h>

void solve()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    if (a == b && b == c && c == d)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
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