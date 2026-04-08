#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);

    char a = 0;
    int b[10000];
    int ans = 0;
 
    for (int i = 0; i < n; i++)
    {
        scanf("%s %d", &a, &ans);

        if (a == 'Q')
        {
            while(i--)
            {
                if (ans == b[i])
                {
                    printf("Yes");
                }
                else
                {
                    printf("No");
                }
            }
        }

        if (a == 'I')
        {
            b[i] = ans;
        }
    }

    return 0;
}