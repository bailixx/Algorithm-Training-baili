#include <stdio.h>

int main()
{
    int n = 0;
    if(scanf("%d", &n) != 1) return 0;

    int a[100005];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int max_len = 1;
    int current_len = 1;
    
    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[i-1])
        {
            current_len++; 
        }
        else
        {
            current_len = 1; 
        }
        
        if (current_len > max_len)
        {
            max_len = current_len;
        }
    }
    
    printf("%d\n", max_len);
    return 0;
}