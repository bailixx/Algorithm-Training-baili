#include <stdio.h>

int main()
{
    char S;

    if (scanf(" %c", &S) != 1) return 0; 


    if (S == 'E')
    {
        printf("F\n");
    }

    else if (S == 'B')
    {
        printf("C\n");
    }

    else
    {
        printf("%c#\n", S); 
    }

    return 0;
}