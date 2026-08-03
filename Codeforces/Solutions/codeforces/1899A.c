#include <stdio.h>

void solve()
{
    int n;
    scanf("%d", &n);
    
    if (n % 3 == 0)
    {
        printf("Second\n");
    } 
    else
    {
        printf("First\n");
    }
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