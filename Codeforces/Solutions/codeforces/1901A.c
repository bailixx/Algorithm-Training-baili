#include <stdio.h>

int max(int a, int b)
{
    return a > b ? a : b;
}

void solve()
{
    int n, x;
    scanf("%d %d", &n, &x);

    int max_dist = 0;
    int prev = 0;    

    for (int i = 0; i < n; i++)
    {
        int current;
        scanf("%d", &current);
        
        max_dist = max(max_dist, current - prev);
        
        prev = current; 
    }

    max_dist = max(max_dist, 2 * (x - prev));

    printf("%d\n", max_dist);
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