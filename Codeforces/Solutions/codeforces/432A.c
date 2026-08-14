#include <stdio.h>

int main()
{
    int n, k;
    if (scanf("%d %d", &n, &k) != 2) return 0;
    
    int valid_count = 0;
    
    for (int i = 0; i < n; i++)
    {
        int y;
        scanf("%d", &y);
        
        if (y + k <= 5)
        {
            valid_count++;
        }
    }
    
    printf("%d\n", valid_count / 3);
    
    return 0;
}