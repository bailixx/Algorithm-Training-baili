#include <stdio.h>
#include <string.h>

int main()
{
	int N = 0;
	if (scanf("%d", &N) != 1) return 0;
	
	char a[10005];
	
	int ans = 0;
	int i = 0, j = 0;
	int max = 0;
	
	for (int i = 0; i < N; i++)
	{
		scanf("%s", a[i]);
		
		if (a[i] == 'L') i++;
		if (a[i] == 'Q') j++;
		if (a[i] == '?') ans++;
	}
	
	for (int k = 0; k < ans; k++)
	{
		max = max > ((i + k) * (j + ans -k)) ? max : ((i + k) * (j + ans -k));
	}
	
	printf("%d", max);
	
	return 0;
}
