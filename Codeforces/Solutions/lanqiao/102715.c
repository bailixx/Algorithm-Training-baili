#include <stdio.h>

int main()
{
    int h, w;
    
    scanf("%d %d", &h, &w);

    int num = 0;

    char pattern[] = "LANQIAO";

    for (int n = 0; n < h; n++)
    {
        for (int d = 0; d < w; d++)
        {
            int index = (n + d) % 7;
            
            if (pattern[index] == 'A')
            {
                num++;
            }
        }
    }

    printf("%d\n", num);

    return 0;
}