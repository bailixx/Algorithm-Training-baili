#include <stdio.h>
#include <stdlib.h>

int main()
{
    int val;
    int answer = 0;

    for(int i=0; i < 5; i++)
    {
        for(int j=0; j < 5; j++)
        {
            scanf("%d", &val);

            if (val == 1)
            {
                answer = abs(i - 2) + abs(j - 2);
            }
        }
    }

    printf("%d\n", answer);

    return 0;
}