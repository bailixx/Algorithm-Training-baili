#include <stdio.h>

int main()
{
    int t = 0;
    if (scanf("%d", &t) != 1) return 0;

    while(t--)
    {
        int arr[4];
        scanf("%d", &arr[0]);
        int count = 0;

        for (int i = 1; i < 4; i++)
        {
            scanf("%d",&arr[i]);
            
            if (arr[i] > arr[0])
            {
                count++;
            }
        }
        printf("%d\n", count);
    }

    return 0;
}