#include <stdio.h>

int main()
{
    int n = 2023;
    int ans = 0;

    for (int i = 1; i <= 2023; i++)
    {
        if (n % i == 0)
        {
            ans++;
        }
    }

    printf("%d", ans);
    
    return 0;
}