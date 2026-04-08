#include <stdio.h>
#include <string.h>

int main()
{
    char s[25];
    scanf("%s", s);

    int count = 0;
    int len = strlen(s);

    for (int i = 0; i < len; i++)
    {
        if (s[i] == '4' || s[i] == '7')
        {
            count++;
        }
    }

    if (count == 4 || count == 7)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}