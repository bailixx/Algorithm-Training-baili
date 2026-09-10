#include <stdio.h>

void solve();

int main()
{
    int t = 0;
    if(scanf("%d", &t) != 1) return 0;

    while(t--)
    {
        solve();
    }

    return 0;
}

void solve()
{
    int n,k,x;
    scanf("%d %d %d", &n, &k, &x);

    if(x != 1)
    {
        printf("YES\n");
        printf("%d\n", n);
        while(n--)
        {
            printf("1 ");
        }
        printf("\n");
    }

    else if (x == 1) // 想不出来，问的gemini
    {
        // 只有 1 可用，但 1 被禁了
        if (k == 1) 
        {
            printf("NO\n");
        }
        // n 为偶数，全用 2 填满
        else if (n % 2 == 0) 
        {
            printf("YES\n");
            printf("%d\n", n / 2); 
            for (int i = 0; i < n / 2; i++) 
            {
                printf("2 ");
            }
            printf("\n");
        }
        // n 为奇数的情况
        else 
        {
            if (k == 2) 
            {
                printf("NO\n"); // 只有 2 凑不出奇数
            }
            else // k >= 3，用一个 3 配合若干个 2 填满
            {
                printf("YES\n");
                printf("%d\n", 1 + (n - 3) / 2); // 1 个 3 加上剩余的 2 的个数
                
                printf("3 ");
                for (int i = 0; i < (n - 3) / 2; i++) 
                {
                    printf("2 ");
                }
                printf("\n");
            }
        }
    }
}