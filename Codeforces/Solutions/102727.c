#include <stdio.h>

int main()
{
    long long sum = 0;   
    long long p = 55; 

    while (p <= 20255202)
    {
        sum += p;
        
        p = p * 10 + 5; 
    }

    printf("%lld\n", sum);

    return 0;
}