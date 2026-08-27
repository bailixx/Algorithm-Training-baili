#include <stdio.h>

void solve()
{
    int n;
    scanf("%d", &n);
    
    printf("%d\n", n - 1);
}

int main()
{
    int t;

    if (scanf("%d", &t) == 1)
    {
        while (t--)
        {
            solve();
        }
    }
    return 0;
}