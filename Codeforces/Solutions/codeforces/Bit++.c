#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int x = 0;
    char s[10];

    while(n--)
    {
        scanf("%s",s);

        if (s[1] == '+')
        {
            x++;
        }
        else if (s[1] == '-')
        {
            x--;
        }
    }

    printf("%d\n", x);

    return 0;

}