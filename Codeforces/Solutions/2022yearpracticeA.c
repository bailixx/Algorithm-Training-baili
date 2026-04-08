#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000000];
    gets(s);
    int c=0;
    for(int i=0;i<strlen(s);i++)
    {
        if(s[0]==s[i])
        {
            c++;
        }
    }

    if(c==strlen(s))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}