#include <stdio.h>
#include <stdbool.h>

bool sushu(long long num)
{
    if (num <= 1) return false;
    
    for (long long i = 2; i*i <= num; i++)
    {
        if (num % i == 0) return false;
    }
    return true;
}

int get_sum(long long num)
{
    int sum = 0;
    while (num > 0)
    {
        sum += num % 10;

        num /= 10;
    }
    return sum;
}

int main()
{
    int ans = 0;

    for (long long i = 0; i <= 1000000; i++)
    {
        if (sushu(i) && get_sum(i) == 23)
        {
            ans++;
        }
    }

    printf("%d\n", ans);

    return 0;
}