#include <stdio.h>

int is_prime(int num)
{
    if (num < 2) return 0;
    
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n, m;
    if (scanf("%d %d", &n, &m) != 2) return 0;
    
    int next_prime = n + 1;

    while (is_prime(next_prime) == 0)
    {
        next_prime++;
    }

    if (next_prime == m)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    
    return 0;
}