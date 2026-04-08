#include <stdio.h>

int main()
{
    char temp[20]; 
    
    for (int i = 0; i < 6; i++)
    {
        scanf("%s", temp);          
        printf("%c", temp[0]);     
    }
    
    printf("\n"); 
    
    return 0;
}