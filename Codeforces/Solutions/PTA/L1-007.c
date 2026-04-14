#include <stdio.h>
#include <string.h>

int main()
{
    char *pinyin[] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    
    char s[100]; 
    if (scanf("%s", s) != 1) return 0;

    int first = 1; 

    for (int i = 0; i < strlen(s); i++)
    {
        if (!first)
        {
            printf(" ");
        }

        if (s[i] == '-')
        {
            printf("fu");
        }
        else
        {
            int digit = s[i] - '0';
            
            printf("%s", pinyin[digit]);
        }
        
        first = 0;
    }
    
    printf("\n"); 

    return 0;
}