#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    int count = 0;
    int prev = 0;
    int curr;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &curr);

        if(curr != prev)
        {
            count++;
            prev = curr;
        }
    }

    printf("%d\n", count);

    return 0;
}