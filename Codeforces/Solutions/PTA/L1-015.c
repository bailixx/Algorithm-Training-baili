#include <stdio.h>

int main()
{
    int N = 0;
    char c = 0;
    if(scanf("%d %c", &N, &c) != 2) return 0;

    for (int i = 0; i < (N+1)/2; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%c", c);
        }
        printf("\n");
    }
    return 0;

}