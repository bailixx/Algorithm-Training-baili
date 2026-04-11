#include <stdio.h>
#include <string.h>

int main()
{
	int T = 0;
	if (scanf("%d", &T) != 1) return 0;
	
	int a[100000005];
	
	int ans = 0;
	
	for (int i = 0; i < T; i++)
	{
		int N = 0;
		if (scanf("%d", &N) != 1) return 0;
		
		for (int j = 0; j < N; j++)
		{
			if (N < 5) return 0;
			else
			{
				scanf("%d", a[j]);
			}
		}
		
		for (int i = 0; i < N; i++)
		{
			ans += a[i];
			if (ans % 5 != 0)
			{
				printf("F");
				
				return 0;
			}
			
			if (a[i] == 0)
			{
				printf("F");
				
				return 0;
			}
			
			
		}
		
		
		
	}
	
	
	
	return 0;
}
