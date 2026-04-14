#include <stdio.h>
#include <string.h>

int main()
{
	long long n = 0;
	if (scanf("%lld", &n) != 1) return 0;
	
	int a[n], b[n];
	int ans = 0;
	
	for (int i = 0; i < n ; i++)
	{
		scanf("%d\n", &a[i]);
		scanf("%d\n", &b[i]);
	}
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if ((b[j] - a[j]) == (b[i] - a[i]) && i != j)
			{
				ans++;
			}
		}
	}
	
	printf("%d", ans);
	
	return 0;
}
