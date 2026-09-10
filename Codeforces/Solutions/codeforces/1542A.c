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
    scanf("%d ", &n);

    int a[205];
    int num1 = 0,num2 = 0;

    for (int i = 0; i < n*2; i++)
    {
        scanf("%d",&a[i]);

        if(a[i] % 2 == 1) num1++;
        if(a[i] % 2 == 0) num2++;
    }

    if(num1 == num2)
    {
        printf("YES\n");
    }
    else if(num1 != num2) 
    {
        printf("NO\n");
    }
}