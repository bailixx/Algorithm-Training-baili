#include <stdio.h>
#include <string.h>

int main()
{
    char s1[105];
    char s2[105];
    char s3[105];
    
    scanf("%s", s1);
    scanf("%s", s2);

    int len1 = strlen(s1);
    int len2 = strlen(s2);

    if(len1 != len2)
    {
        printf("NO\n");
        return 0;
    }

    for (int i = 0; i < len1; i++)
    {
        s3[i] = s2[len1 - i - 1];
    }

    s3[len1] = '\0';

    if (strcmp(s1, s3) == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}