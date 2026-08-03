#include <stdio.h>

int main()
{
    int n = 0;
    if(scanf("%d", &n) != 1) return 0;

    int count = 0; 
    int sum = 0;   

    for (int i = 0; i < n; i++)
    {
        int num = 0;
        scanf("%d", &num);

        if (num > 0) 
        {
            sum += num;
        } 
        else if (num == -1) 
        {
            if (sum > 0) 
            {
                sum--;
            } 
            else 
            {
                count++;
            }
        }
    }
    
    printf("%d\n", count);

    return 0;
}