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

    int count1 = 0, count2 = 0;

    for(int i = 0; i < n; i++)
    {
        int candy;
        scanf("%d", &candy);
        if (candy == 1)
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }

    if ((count1 * 1 + count2 * 2) % 2 != 0)
    {
        printf("NO\n");
    }
    else
    {
        if (count1 == 0 && count2 % 2 != 0)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
}