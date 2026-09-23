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

    int num = 0;

    int even_num = 0;
    int odd_num = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);

        if(num % 2 == 0)
        {
            even_num += num;
        }

        else if (num % 2 == 1)
        {
            odd_num += num;
        }
    }

    if(even_num > odd_num)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}