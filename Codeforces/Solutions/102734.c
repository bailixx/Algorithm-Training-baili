#include <stdio.h>

int main()
{
    int h, w;
    scanf("%d %d", &h, &w);

    char pattern[] = "2025";

    for (int r = 0; r < h; r++) 
    {
        for (int c = 0; c < w; c++)
        {
            int index = (r + c) % 4;
            printf("%c", pattern[index]);
        }
    
        printf("\n");
    }

    return 0;
}