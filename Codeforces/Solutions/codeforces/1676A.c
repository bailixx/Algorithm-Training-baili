#include <stdio.h>

int main()
{
    int t = 0;
    if(scanf("%d", &t) != 1) return 0;

    for (int i = 0; i < t; i++)
    {
        char s[10];
        scanf("%s", s);

        int front = 0;
        int behind = 0;

        for (int j = 0; j < 6; j++)
        {
            if(j < 3 && j >= 0)
            {
                front += s[j];
            }
            if(j < 6 && j >= 3)
            {
                behind += s[j];
            }
        }

        if (front == behind) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}