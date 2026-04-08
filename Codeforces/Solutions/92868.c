#include <stdio.h>

long long A[1005][1005];
long long S[1005][1005];

int main() 
{
    int n, m, q;
    if (scanf("%d %d %d", &n, &m, &q) != 3) return 0;

    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= m; j++) 
        {
            scanf("%lld", &A[i][j]);
    
            S[i][j] = S[i-1][j] + S[i][j-1] - S[i-1][j-1] + A[i][j];
        }
    }

    while (q--) 
    {
        int x1, y1, x2, y2;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        
        long long ans = S[x2][y2] - S[x1-1][y2] - S[x2][y1-1] + S[x1-1][y1-1];
        
        printf("%lld\n", ans);
    }

    return 0;
}