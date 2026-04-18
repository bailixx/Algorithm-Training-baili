#include <stdio.h>

int main()
{
	int A = 0;
	int B = 0;
	if (scanf("%d %d", &A, &B) != 2) return 0;
	
	int sum = 0;
	sum = B - A;
	
	if (sum > 250)
	{
		printf("%d\n", sum);
		printf("jiu ting tu ran de...");
	}
	
	if (sum <= 0)
	{
		printf("%d\n", sum);
		printf("hai sheng ma?");
	}
	
	if (sum > 0 && sum <= 250 )
	{
		printf("%d\n", sum);
		printf("nin tai cong ming le!");
	}
	
	return 0;
	
}
