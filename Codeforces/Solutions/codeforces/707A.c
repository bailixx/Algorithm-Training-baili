#include <stdio.h>

int main()
{
    int n ,m;
    if(scanf("%d %d", &n, &m) != 2) return 0;

    int is_color = 0; 

    for (int i = 0; i < n * m; i++)
    {
        char c;
        scanf(" %c", &c);

        if (c == 'C' || c == 'M' || c == 'Y')
        {
            is_color = 1;
        }
    }

    if (is_color == 1)
    {
        printf("#Color\n");
    }
    else
    {
        printf("#Black&White\n");
    }

    return 0;
}