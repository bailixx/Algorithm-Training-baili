#include <stdio.h>
#include <math.h>

int isPrime(int x) 
{
    if (x < 2) return 0;
    for (int i = 2; i * i <= x; i++) 
    {
        if (x % i == 0) return 0;
    }
    return 1;
}

int main() 
{
    int count = 0;
    int num = 2;
    while (1) 
    {
        if (isPrime(num)) 
        {
            count++;
            if (count == 2025) 
            {
                printf("%d", num);
                break;
            }
        }
        num++;
    }
    return 0;
}
