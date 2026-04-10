#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n = 0;
	
	char ans[n];
	
	int num_a = 0;
	int num_b = 0;
	
	for (int i = 0; i < n; i++)
	{
		scanf("%s", ans[i]);
		
		if (ans[i] == 'A') num_a++;
		if (ans[i] == 'B') num_b++;
	}
	
	if (num_a > num_b)
	{
		printf("A");
	}
	else
	{
		printf("B");
	}
	
	return 0;
	
}
