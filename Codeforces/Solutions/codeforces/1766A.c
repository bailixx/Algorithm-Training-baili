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

    if(n <= 9)
    {
        printf("%d\n", n);
    }
    else
    {
        int first_digit = n;
        int cross_levels = 0; 

        while (first_digit >= 10)
        {
            first_digit /= 10;
            cross_levels++;
        }

        int ans = cross_levels * 9 + first_digit;
        printf("%d\n", ans);
    }
}