#include <stdio.h>
#include <string.h>

void solve()
{
    int n;
    scanf("%d", &n);
    
    char s[55];
    scanf("%s", s);
    
    int seen[26] = {0}; 
    int total_balloons = 0;
    
    for (int i = 0; i < n; i++)
    {
        int index = s[i] - 'A'; 
        
        if (seen[index] == 0)
        {
            total_balloons += 2;
            seen[index] = 1;
        }
        else
        {
            total_balloons += 1;
        }
    }
    
    printf("%d\n", total_balloons);
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