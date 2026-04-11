#include <stdio.h>

int main()
{
	int T = 0;
	scanf("%d", &T);
	
	long long N, X, Y;
	
	int ans = Y - X + 1;
	
	for (int i = 0; i < T; i++)
	{
		scanf("%lld %lld %lld", &N, &X, &Y);
	
	
		if (X > Y)
		{
			printf("0\n");
			continue;
		}
	
		if (X = Y)
		{
			printf("1\n");
			continue;
		}
	
		else if (X < Y)
		{
			printf("%d\n", ans);
			continue;
		}
	}
	return 0;
}
