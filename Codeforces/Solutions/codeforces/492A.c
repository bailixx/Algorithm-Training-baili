#include <stdio.h>

int main()
{
    int n;
    if (scanf("%d", &n) != 1) return 0;
    
    int h = 0;
    int current_level = 0;
    int total_used = 0;
    
    while (1)
    {
        h++;
        
        current_level += h; 
        
        total_used += current_level; 
        
        if (total_used > n)
        {
            h--;
            break;
        }
    }
    
    printf("%d\n", h);
    
    return 0;
}