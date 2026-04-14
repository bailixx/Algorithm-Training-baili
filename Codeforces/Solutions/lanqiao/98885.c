#include <stdio.h>
#include <string.h>

int main()
{
    char S[15]; 

    char T[1005]; 

    if (scanf("%s", S) != 1) return 0;
    if (scanf("%s", T) != 1) return 0;

    int len = strlen(T);

    for (int i = 0; i < len; i++)
    {
        if (T[i] >= '0' && T[i] <= '9')
        {
            int index = T[i] - '0';
        
            T[i] = S[index]; 
        }
    }

    printf("%s\n", T);

    return 0;
}