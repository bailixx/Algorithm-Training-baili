#include <stdio.h>
#include <string.h>

void solve()
{
    char x[10];
    scanf("%s", x);
    
    int digit = x[0] - '0'; 
    
    int len = strlen(x);
    
    int full_groups_keys = (digit - 1) * 10;

    int current_group_keys = (len * (len + 1)) / 2;
    
    printf("%d\n", full_groups_keys + current_group_keys);
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