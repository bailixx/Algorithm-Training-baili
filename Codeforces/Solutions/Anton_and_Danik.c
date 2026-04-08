#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    char s[100005];
    scanf("%s", s);

    int count_anton = 0;
    int count_danik = 0;

    int len = strlen(s);

    for (int i = 0; i < len; i++)
    {
        if (s[i] == 'A')
        {
            count_anton++;
        }
        if(s[i] == 'D')
        {
            count_danik++;
        }
    }

    if(count_anton > count_danik)
    {
        printf("Anton\n");
    }
    if(count_anton < count_danik)
    {
        printf("Danik\n");
    }
    if(count_anton == count_danik)
    {
        printf("Friendship\n");
    }

    return 0;

}