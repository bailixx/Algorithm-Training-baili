#include <stdio.h>
#include <string.h>

int main()
{
    int a[4];
    if (scanf("%d %d %d %d", &a[0], &a[1], &a[2], &a[3]) != 4) return 0;
    
    char s[100005];
    scanf("%s", s);
    
    int total_calories = 0;
    int len = strlen(s);
    
    for (int i = 0; i < len; i++) 
    {
        int index = s[i] - '1';
        total_calories += a[index];
    }
    
    printf("%d\n", total_calories);
    
    return 0;
}