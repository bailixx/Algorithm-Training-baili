#include <stdio.h>

void solve()
{
    int n, k;
    scanf("%d %d", &n, &k);

    int arr[105];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    if (k >= 2)
    {
        printf("YES\n");
        return; 
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i+1])
        {
            printf("NO\n");
            return;
        }
    }

    printf("YES\n");
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