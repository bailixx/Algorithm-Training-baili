#include <stdio.h>
#include <string.h>

int main()
{
    int n = 0;
    if (scanf("%d", &n) != 1) return 0;

    int ans = 0;

    char S[10];

    for (int i = 0; i < n; i++)
    {
        scanf("%s", S);

        int len = strlen (S);

        if ((len == 3) && (S[1] == S[2]) && (S[0] != S[1]))
        {
            ans++;
        }
        else
        {
            continue;
        }
    }

    printf("%d\n", ans);

    return 0;
}