#include <stdio.h>

int main()
{
    int n;
    if (scanf("%d", &n) != 1) return 0;
    
    int mishka_wins = 0;
    int chris_wins = 0;
    
    for (int i = 0; i < n; i++)
    {
        int m, c;
        scanf("%d %d", &m, &c);
        
        if (m > c)
        {
            mishka_wins++;
        }
        else if (m < c)
        {
            chris_wins++;
        }
    }
    
    if (mishka_wins > chris_wins)
    {
        printf("Mishka\n");
    }
    else if (mishka_wins < chris_wins)
    {
        printf("Chris\n");
    }
    else
    {
        printf("Friendship is magic!^^\n");
    }
    
    return 0;
}