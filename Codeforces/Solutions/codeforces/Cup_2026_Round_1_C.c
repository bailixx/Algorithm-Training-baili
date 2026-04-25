#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    int x = *(const int *)a;
    int y = *(const int *)b;
    if (x < y) return -1;
    if (x > y) return 1;
    return 0;
}

void solve()
{
    int n;
    if (scanf("%d", &n) != 1) return;

    int *a = (int *)malloc(n * sizeof(int));
    int *b = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        b[i] = a[i];
    }

    qsort(b, n, sizeof(int), compare);
    int M = b[n / 2];

    int *pref_ge = (int *)malloc((n + 1) * sizeof(int));
    int *pref_le = (int *)malloc((n + 1) * sizeof(int));
    pref_ge[0] = 0;
    pref_le[0] = 0;

    for (int i = 0; i < n; i++)
    {
        pref_ge[i + 1] = pref_ge[i] + (a[i] >= M ? 1 : 0);
        pref_le[i + 1] = pref_le[i] + (a[i] <= M ? 1 : 0);
    }

    int *dp = (int *)malloc((n + 1) * sizeof(int));
    for (int i = 0; i <= n; i++) dp[i] = -1; 
    dp[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = (i % 2 == 1 ? 0 : 1); j < i; j += 2)
        {
            if (dp[j] != -1)
            {
                int L = i - j;
                int c_ge = pref_ge[i] - pref_ge[j];
                int c_le = pref_le[i] - pref_le[j]; 

                if (c_ge * 2 > L && c_le * 2 > L)
                {
                    if (dp[j] + 1 > dp[i])
                    {
                        dp[i] = dp[j] + 1;
                    }
                }
            }
        }
    }

    printf("%d\n", dp[n]);

    free(a);
    free(b);
    free(pref_ge);
    free(pref_le);
    free(dp);
}

int main()
{
    int t;
    if (scanf("%d", &t) != 1) return 0;
    
    while (t--)
    {
        solve();
    }
    return 0;
}