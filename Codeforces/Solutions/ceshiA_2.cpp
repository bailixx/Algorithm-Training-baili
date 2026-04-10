#include <stdio.h>

int main()
{
	long long f1 = 1;
	long long f2 = 1;
	long long f3;
	int i = 2;
	
	while (f2 <= 20211001)
	{
		f3 = f2 + f1;
		f1 = f2;
		f2 = f3;
		i++;
	}
	
	printf("%d", i);
	
	return 0;
}
