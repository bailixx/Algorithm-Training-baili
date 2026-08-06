#include <stdio.h>

int main()
{
    int k, r;
    
    if (scanf("%d %d", &k, &r) != 2) return 0;
    
    for (int i = 1; i <= 10; i++)
    {
        int total_cost = i * k;        

        if (total_cost % 10 == 0 || total_cost % 10 == r)
        {
            printf("%d\n", i);
            break;
        }
    }
    
    return 0;
}