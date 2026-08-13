#include <stdio.h>

void solve()
{
    int k;
    scanf("%d", &k);
    
    int count = 0;
    
    for (int i = 1; ; i++)
    {
        if (i % 3 == 0 || i % 10 == 3)
        {
            continue;
        }
        
        count++;
        
        if (count == k)
        {
            printf("%d\n", i);
            return;
        }
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