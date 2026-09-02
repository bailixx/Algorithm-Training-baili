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

    int a[1005];
    int total_twos = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] == 2)
        {
            total_twos++;
        }
    }

    if (total_twos % 2 != 0)
    {
        printf("-1\n");
        return;
    }

    int target_twos = total_twos / 2;
    int current_twos = 0;

    for (int k = 1; k < n; k++)
    {
        if (a[k - 1] == 2)
        {
            current_twos++;
        }
        
        if (current_twos == target_twos)
        {
            printf("%d\n", k);
            return;
        }
    }
}