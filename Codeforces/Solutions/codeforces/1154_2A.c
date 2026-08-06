#include <stdio.h>

int main()
{
    int arr[4];
    
    if (scanf("%d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3]) != 4) return 0;
    
    int max = arr[0];
    int max_index = 0;
    for (int i = 1; i < 4; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            max_index = i;
        }
    }
    
    for (int i = 0; i < 4; i++)
    {
        if (i != max_index)
        {
            printf("%d ", max - arr[i]);
        }
    }
    
    printf("\n");
    return 0;
}