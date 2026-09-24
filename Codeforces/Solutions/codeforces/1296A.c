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

    int a[2005];
    int even_num = 0;
    int odd_num = 0;

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

        if(a[i] % 2 != 0) 
        {
            odd_num++;
        } 
        else 
        {
            even_num++;
        }
    }

    if (odd_num == 0) 
    {
        printf("NO\n");
    }

    else if (even_num == 0) 
    {
        if (n % 2 != 0) printf("YES\n"); 
        else printf("NO\n");
    }

    else 
    {
        printf("YES\n");
    }
}