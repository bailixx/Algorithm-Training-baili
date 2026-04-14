#include <stdio.h>

int main()
{
    int num = 0; 
    
    long long diff = 10011001; 

    for (long long i = 1; i * i <= diff; i++)
    {
        if (diff % i == 0)
        {
            long long j = diff / i; 
            
            long long y = (j - i) / 2;
            
            long long n = y * y - 10244201;
            
            if (n > 0)
            {
                num++;
            }
        }
    }

    printf("%d\n", num);

    return 0;
}