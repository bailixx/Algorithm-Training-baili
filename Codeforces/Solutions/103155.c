#include <stdio.h>
#include <stdlib.h> 

int main()
{
    long long a[10];
    
    
    for (int n = 0; n < 10; n++)
    {
        scanf("%lld", &a[n]);
    }

    int current_sum = 0; 
    int best_sum = 0;   

    for (int i = 0; i < 10; i++)
    {
        current_sum += a[i];

        int current_diff = abs(current_sum - 100);
        int best_diff = abs(best_sum - 100);

        if (current_diff < best_diff)
        {
            best_sum = current_sum;
        }
        else if (current_diff == best_diff)
        {
            if (current_sum > best_sum)
            {
                best_sum = current_sum;
            }
        }
    }

    printf("%d\n", best_sum);

    return 0;
}