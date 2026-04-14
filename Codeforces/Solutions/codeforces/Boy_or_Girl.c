#include <stdio.h>
#include <string.h>

int main()
{
    char s[105];
    scanf("%s", s);

    int book[26] = {0};
    int len = strlen(s);

    for (int i = 0; i < len; i++)
    {
        int index = s[i] - 'a';

        book[index] = 1;
    }

    int count = 0;
    for (int i = 0; i < 26; i++)
    {
        if (book[i] == 1)
        {
            count++;
        }
    }

    if (count % 2 == 0)
    {
        printf("CHAT WITH HER!\n");
    }
    else
    {
        printf("IGNORE HIM!\n");
    }

    return 0;

}