#include <stdio.h>
#include <string.h>

int main()
{
    char A[10005], B[10005];
    int exists[256] = {0};

    gets(A);
    gets(B);

    int lenB = strlen (B);

    for (int i = 0; i < lenB; i++)
    {
        int index = (unsigned char)B[i];
        exists[index] = 1;
    }

    int lenA = strlen(A);
    for(int i = 0; i < lenA; i++)
    {
        if (!exists[(unsigned char)A[i]])
        {
            putchar(A[i]);
        }
    }
    printf("\n");
    return 0;
}