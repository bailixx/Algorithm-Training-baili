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
    int n = 0;
    scanf("%d", &n);

    int a[505];
    scanf("%d", &a[0]);

    int min_diff = 1e9;
    int sorted = 1;

    for (int i = 1; i < n; i++)
    {
        scanf("%d", &a[i]);

        if (a[i] < a[i - 1])
        {
            sorted = 0; 
        }

        int diff = a[i] - a[i - 1];
        if (diff >= 0 && diff < min_diff)
        {
            min_diff = diff;
        }
    }

    if (!sorted)
    {
        printf("0\n");
        return;
    }

    printf("%d\n", min_diff / 2 + 1);
}