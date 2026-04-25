#include <stdio.h>

int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;

    while (t--)
    {
        int n;
        scanf("%d", &n);
        
        int has100 = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            scanf("%d", &a);

            if (a == 100)
            {
                has100 = 1;
            }
        }
        
        if (has100 == 1)
        {
            printf("Yes\n");
        } 
        else
        {
            printf("No\n");
        }
    }
    
    return 0;
}