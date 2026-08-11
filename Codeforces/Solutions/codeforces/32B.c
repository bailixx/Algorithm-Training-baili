#include <stdio.h>
#include <string.h>

int main() {
    char s[205]; 
    
    if (scanf("%s", s) != 1) return 0;
    
    int len = strlen(s);
    
    for (int i = 0; i < len; )
    {
        if (s[i] == '.')
        {
            printf("0");
            i++;
        } 
        else if (s[i] == '-')
        {
            if (s[i+1] == '.')
            {
                printf("1");
            }
            else if (s[i+1] == '-')
            {
                printf("2");
            }
            i += 2;
        }
    }
    
    printf("\n");
    return 0;
}