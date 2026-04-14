#include <stdio.h>
#include <string.h>

int main()
{
    char S[10005];
    if(scanf("%s", S) != 1) return 0;

    int len = strlen (S);

    int ans = 0;

    for (int i = 0; i < len; i++)
    {
        int num = S[i] - '0';

        if (num % 2 != 0)
        {
            ans++;
        }
    }

    printf("%d\n", ans);

    return 0;
}