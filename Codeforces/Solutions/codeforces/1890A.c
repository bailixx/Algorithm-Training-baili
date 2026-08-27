#include <stdio.h>
#include <stdlib.h>

void solve()
{
    int n;
    scanf("%d", &n);
    
    int val1 = -1, val2 = -1;
    int count1 = 0, count2 = 0;
    int possible = 1;
    
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        
        if (val1 == -1 || val1 == x)
        {
            val1 = x;
            count1++;
        }
        else if (val2 == -1 || val2 == x)
        {
            val2 = x;
            count2++;
        }
        else
        {
            possible = 0;
        }
    }
    
    if (possible && (count2 == 0 || abs(count1 - count2) <= 1))
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
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