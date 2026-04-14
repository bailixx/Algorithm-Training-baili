#include <stdio.h>
#include <string.h>

int main()
{
    int n,t;
    scanf("%d %d", &n, &t);

    char s[105];
    scanf("%s", s);

    while(t--)
    {
        for(int i = 0; i < n-1; i++)
        {
            if ( s[i] == 'B' && s[i+1] == 'G')
            {
                int temp;
                temp = s[i + 1];
                s[i + 1] = s[i];
                s[i] = temp;

                i++;
            }
        }
    }

    printf("%s\n", s);

    return 0;
}