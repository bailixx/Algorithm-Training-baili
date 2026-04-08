#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

int cmp(const void *a, const void *b) 
{
    return (*(char*)a - *(char*)b);
}

int main() 
{
    char s[] = "snake";
    
    int len = strlen(s);

    qsort(s, len, sizeof(char), cmp);

    printf("%s\n", s);

    return 0;
}