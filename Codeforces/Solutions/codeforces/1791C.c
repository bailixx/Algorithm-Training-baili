#include <stdio.h>

void solve() 
{
    int n;
    scanf("%d", &n);
    
    char s[2005];
    scanf("%s", s);
    
    int left = 0;
    int right = n - 1;
    
    while (left < right)
    {
        if (s[left] != s[right])
        {
            left++;
            right--;
        }
        else
        {
            break;
        }
    }
    
    printf("%d\n", right - left + 1);
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