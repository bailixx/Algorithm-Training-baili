#include <stdio.h>

int main()
{
    int T;
    if (scanf("%d", &T) != 1) return 0;
    
    while (T--)
    {
        int a[10005];
        int count = 0;
        int x;
        
        while (scanf("%d", &x) == 1 && x != -1)
        {
            a[count++] = x;
        }
        int found = 0;
        int res_idx = -1;
        for (int i = 0; i < count; i++)
        {
            for (int j = i + 1; j < count - 2; j++)
            {
                if (a[i] == a[j] && a[i + 1] == a[j + 1] && a[i + 2] == a[j + 2])
                {
                    res_idx = i;
                    found = 1;
                    break;
                }
            }
            if (found) break;
        }
        if (found)
        {
            printf("%d %d %d\n", a[res_idx], a[res_idx + 1], a[res_idx + 2]);
        } 
        else
        {
            printf("NONE\n");
        }
    }
    return 0;
}