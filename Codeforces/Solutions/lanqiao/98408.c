#include <stdio.h>

int main()
{
    int n = 0;
    if (scanf("%d", &n) != 1) return 0;

    double min_ratio = 2.0; 
    
    int best_index = 0;

    for (int i = 1; i <= n; i++)
    {
        int t, p;
        scanf("%d %d", &t, &p);

        double current_ratio = (p * 1.0) / t;

        if (current_ratio < min_ratio)
        {
            min_ratio = current_ratio; 
            best_index = i;            
        }
    }

    printf("%d\n", best_index);

    return 0;
}