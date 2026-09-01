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

    int b[200005];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    int ans[400010]; 
    int m = 0;

    ans[m++] = b[0];

    for (int i = 1; i < n; i++)
    {
        if (b[i] >= b[i-1])
        {
            ans[m++] = b[i];
        }
        else
        {
            ans[m++] = 1;
            ans[m++] = b[i];
        }
    }

    printf("%d\n", m);
    
    for (int i = 0; i < m; i++)
    {
        printf("%d ", ans[i]);
    }
    printf("\n");
}