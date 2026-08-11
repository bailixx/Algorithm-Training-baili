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
    
    int a[105];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int common_val;
    
    if (a[0] == a[1])
    {
        common_val = a[0];
    }
    else
    {
        if (a[0] == a[2])
        {
            common_val = a[0];
        }
        else
        {
            common_val = a[1];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] != common_val)
        {
            printf("%d\n", i + 1);
            return;
        }
    }
}