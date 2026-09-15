#include <stdio.h>

void solve();

int main()
{
    int t = 0;
    if(scanf("%d",&t) != 1) return 0;

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

    int ai,bi;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ai);
        printf("%d ", n + 1 - ai);
    }

    printf("\n");
}