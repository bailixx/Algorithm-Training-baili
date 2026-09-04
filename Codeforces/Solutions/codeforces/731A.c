#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

int main()
{
    char s[105];
    
    if (scanf("%s", s) != 1) return 0;

    int total_steps = 0;
    char curr = 'a';

    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        int diff = abs(s[i] - curr);
        
        int min_step = diff < (26 - diff) ? diff : (26 - diff);
        
        total_steps += min_step; 
        curr = s[i];             
    }

    printf("%d\n", total_steps);
    return 0;
}