#include <stdio.h>

int main()
{
	int n = 0;
	if (scanf("%d", &n) != 1) return 0;
	
	long long num[1005];
	
	long long sum = 0;
	
	long long max = 0, min = 1000000, aver;
	
	int q = 0;
	int j, i;
	
	for (i = 0; i < n; i++)
	{
		scanf("%lld", &num[i]);
		
		sum += num[i];
		aver = sum / i;
		
		max = max > num[i] ? max : num[i];
		min = min < num[i] ? min : num[i]; 
	}
	
	printf("%lld %lld %lld", max, min, aver);
	
	for (j = 0; i < n; i++)
	{
		if (num[i] > aver * 2)
		{
			printf("%d", j);
			q++;
		}
		
		if (q == 0)
		{
			printf("Normal");
		}
	}
	
	return 0;
	
}
