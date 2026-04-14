#include <stdio.h>

int is_valid(int num)
{
    int cnt0 = 0, cnt2 = 0, cnt5 = 0;
    
    while (num > 0)
    {
        int digit = num % 10; 
        
        if (digit == 0) cnt0++;
        else if (digit == 2) cnt2++;
        else if (digit == 5) cnt5++;
        
        num /= 10;
    }
    
    return (cnt0 >= 1 && cnt2 >= 2 && cnt5 >= 1);
}

int main()
{
    int n = 0;

    for (int a = 1; a <= 20250412; a++)
    {
        if (is_valid(a))
        {
            n++;
        }
    }

    printf("%d\n", n);
    return 0;
}