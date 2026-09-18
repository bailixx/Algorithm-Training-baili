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
    int x[4], y[4];
    
    for (int i = 0; i < 4; i++)
    {
        scanf("%d %d", &x[i], &y[i]);
    }
    
    for (int i = 1; i < 4; i++)
    {
        if (x[i] != x[0])
        {
            int side = x[i] - x[0];
            printf("%d\n", side * side);
            break;
        }
    }
}