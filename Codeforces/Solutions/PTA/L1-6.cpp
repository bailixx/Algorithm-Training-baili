#include <stdio.h>
#include <string.h>

int main()
{
	char S[15];
	char A[15];
	
	int len = strlen(S);
	
	for (int i = 0; i < 11; i++)
	{
		scanf("%s", &S);
		A[i] = len;
	}
	
	for (int j = 0; j < 11; j++)
	{
		printf("%s", A[j]);
	}
	
	return 0;
}
