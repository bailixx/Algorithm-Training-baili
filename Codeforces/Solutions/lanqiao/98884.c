#include <stdio.h>
#include <string.h>

int main()
{
    char S[105];

    if (scanf("%s", S) != 1) return 0;

    int len = strlen(S);

    if (S[len - 1] == '0')
    {
        S[len - 1] = '1';
    }

    else if (S[len - 1] == '1')
    {
        S[len - 1] = '0';
    }

    printf("%s", S);

    return 0;
}