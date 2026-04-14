#include <stdio.h>

int main()
{
    int w, h, v;
    scanf("%d %d %d", &w, &h, &v);

    for (int n = 0; n < h; n++)
    {
        for (int i = 0; i < w; i++)
        {
            printf("Q");
        }
        
        printf("\n");
    }

    for (int a = 0; a < w; a++)
    {
        for (int b = 0; b < v + w; b++)
        {
            printf("Q");
        }  

        printf("\n");
    }

    return 0;
}