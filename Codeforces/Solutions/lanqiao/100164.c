#include <stdio.h>

int main()
{
    int n = 2024;
    int sum = 0;

    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i;

            while (n % i == 0)
            {
                n /= i;
            }
        }

    }
    printf("%d\n", sum);

    return 0;
}