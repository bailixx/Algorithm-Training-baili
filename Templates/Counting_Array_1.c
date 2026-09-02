#include <stdio.h>

void solve();

int count[200005];

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

    for (int i = 1; i <= n; i++)
    {
        count[i] = 0;
    }

    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        int val;
        scanf("%d", &val);
        
        count[val]++;
        
        if (count[val] >= 3)
        {
            ans = val;
        }
    }

    printf("%d\n", ans);
}