#include <stdio.h>

int main()
{
	int n = 0;
	if (scanf("%d", &n) != 1) return 0;
	
	int num = 0;
	int sum = 0;
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num);
		
		if (num < 1700)
		{
			sum++;
		}
	}
	
	printf("%d", sum);
	
	return 0;
}
