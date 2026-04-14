#include <stdio.h>
#include <string.h> 

int main()
{
    char s[100005]; 
    scanf("%s", s);

    int len = strlen(s);
    int ans = 0;

    for (int i = 0; i <= len - 3; )
    {
        char c1 = s[i];
        char c2 = s[i+1];
        char c3 = s[i+2];

        if (c1 != c2 && c1 != c3 && c2 != c3 &&
           (c1 == 'l' || c1 == 'q' || c1 == 'b') &&
           (c2 == 'l' || c2 == 'q' || c2 == 'b') &&
           (c3 == 'l' || c3 == 'q' || c3 == 'b'))
        {
            ans++;   
            i += 3; 
        }
        else
        {
            i++; 
        }
    }

    printf("%d\n", ans);

    return 0;
}