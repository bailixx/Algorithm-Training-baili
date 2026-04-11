#include <stdio.h>

int main()
{
	long long N = 2026202520242023;
	
	long long ans = 0;
	
	for (long long i = 0; i <= 1013101260121012; i++)
	{
		if (N-i > i)
		{
			ans++;
		}
		else
		{
			return 0;
		}
	}
	
	printf("%lld", ans);
	
	return 0;
}
