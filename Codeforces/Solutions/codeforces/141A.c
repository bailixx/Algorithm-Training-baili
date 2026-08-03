#include <stdio.h>
#include <string.h>

int main()
{
    char s1[105], s2[105], s3[105];
    
    if (scanf("%s", s1) != 1) return 0;
    scanf("%s", s2);
    scanf("%s", s3);
    
    int count[26] = {0};
    
    for (int i = 0; i < strlen(s1); i++)
    {
        count[s1[i] - 'A']++;
    }
    
    for (int i = 0; i < strlen(s2); i++)
    {
        count[s2[i] - 'A']++;
    }
    
    for (int i = 0; i < strlen(s3); i++)
    {
        count[s3[i] - 'A']--;
    }
    
    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            printf("NO\n");
            return 0;
        }
    }

    printf("YES\n");
    return 0;
}