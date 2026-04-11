#include <stdio.h>
#include <string.h>

long long MOD = 998244353;

int main()
{
	int n, m;
	int a[10005], b[10005];
	int max = 0;
	int ans = 0;
	int shili[10005];
	
	if (scanf("%d %d", &n, &m) != 2) return 0;
	
	for (int i = 0; i < n; i++)
	{
		if (scanf("%d %d", &a[i], &b[i]) != 2) return 0;
	}
	
	for (int i = 1; i <= m; i++)
	{
		for (int i = 0; i < n; i++)
		{
			while((i+1)<=n)
			{
				shili[i] = a[i] + b[i] * i;
				shili[i+1] = a[i+1] + b[i+1] * (m-i);
				
				max = max > (shili[i] * shili[i+1]) ? max : (shili[i] * shili[i+1]);
				
			}
		}
	}
	ans = max % MOD;
	
	printf("%d",ans);
	
	return 0;
}
