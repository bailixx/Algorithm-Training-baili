#include <stdio.h>

int main()
{
	int n;
	
	if (scanf("%d", &n) == 1)
	{
		char ans[n + 1];
		
		scanf("%s", ans);
		
		int num_a = 0; 
		int num_b = 0;
		
		for (int i = 0; i < n; i++)
		{
			if (ans[i] == 'A') num_a++;
			if (ans[i] == 'B') num_b++;
		}
		
		if (num_a > num_b)
		{
			printf("A\n");
		}
		else
		{
			printf("B\n");
		}
	}
	
	return 0;
}
