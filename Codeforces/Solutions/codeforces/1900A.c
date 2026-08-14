#include <stdio.h>
#include <string.h>

void solve()
{
    int n;
    scanf("%d", &n);
    
    char s[105];
    scanf("%s", s);
    
    int empty_count = 0;
    int has_infinite_water = 0;
    
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '.')
        {
            empty_count++;
        
            if (i >= 2 && s[i-2] == '.' && s[i-1] == '.' && s[i] == '.')
            {
                has_infinite_water = 1;
            }
        }
    }
    
    if (has_infinite_water)
    {
        printf("2\n");
    }
    else
    {
        printf("%d\n", empty_count);
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