#include <stdio.h>

void solve()
{
    char s[10];
    scanf("%s", s);
    
    int countA = 0;
    
    for (int i = 0; i < 5; i++)
    {
        if (s[i] == 'A')
        {
            countA++;
        }
    }
    
    if (countA >= 3)
    {
        printf("A\n");
    }
    else
    {
        printf("B\n");
    }
}

int main()
{
    int t;
    if (scanf("%d", &t) == 1)
    { 
        while (t--)
        {
            solve();
        }
    }
    return 0;
}