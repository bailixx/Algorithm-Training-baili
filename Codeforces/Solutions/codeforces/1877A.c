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
    int sum = 0, num = 0;

    for (int i = 0; i < n-1; i++)
    {
        scanf("%d", &num);

        sum += num;
    }

    printf("%d\n", -sum);
}