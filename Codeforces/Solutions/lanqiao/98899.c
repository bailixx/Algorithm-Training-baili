#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int N = 0;

    if (scanf("%d", &N) != 1) return 0;

    char A[100];
    int ans = 0;

    for (int i = 0; i < N; i++)
    {
        scanf("%s", A);

        int len = strlen(A);
        
        bool is_super = true; 

        for (int j = 1; j < len; j++)
        {
            if (A[j] != A[0])
            {
                is_super = false; 
                break;            
            }
        }

        if (is_super)
        {
            ans++;
        }
    }

    printf("%d\n", ans);

    return 0;
}