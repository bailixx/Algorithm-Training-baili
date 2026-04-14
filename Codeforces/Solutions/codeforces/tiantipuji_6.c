#include <stdio.h>
#include <string.h>

int main()
{
    int T;

    if (scanf("%d", &T) != 1) return 0;

    while (T--)
    {
        int vis[1005];
        memset(vis, 0, sizeof(vis));

        int x;
        int result = -1; 
        int found = 0;  

        while (scanf("%d", &x) == 1 && x != -1)
        {
            if (!found)
            {
                if (vis[x] == 1)
                {
                    result = x;
                    found = 1; 
                } else
                {
                    vis[x] = 1; 
                }
            }
        }

        if (found)
        {
            printf("%d\n", result);
        } else
        {
            printf("NONE\n");
        }
    }

    return 0;
}