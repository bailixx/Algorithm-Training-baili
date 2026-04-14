#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[105];
    scanf("%s", s);

    int len = strlen(s);
    int up_count = 0;
    int low_count = 0;

    for (int i = 0; i < len; i++)
    {
        if (isupper(s[i]))
        {
            up_count++;
        }
        else{
            low_count++;
        }
    }

    if(up_count > low_count)
    {
        for (int i = 0; i < len; i++)
        {
            s[i] = toupper(s[i]);
        }
    }
    else
    {
        for (int i = 0; i < len; i++)
        {
            s[i] = tolower(s[i]);
        }
    }

    printf("%s\n", s);

    return 0;

}