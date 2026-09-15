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

    int count = 0;

    for (long long d = 1; d <= 9; d++) 
    {
        long long num = d;         
       
        while (num <= n) 
        {
            count++;
            num = num * 10 + d; 
        }
    }

    printf("%d\n", count);
}