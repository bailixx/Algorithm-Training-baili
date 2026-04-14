#include <stdio.h>
#include <ctype.h>

int matrix[105][105];

int main()
{
	int n, m;
	if (scanf("%d %d", &n, &m) != 2) return 0;
	
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			scanf("%d", &matrix[i][j]);
		}
	}
	
	char formula[1005];
	scanf("%s", formula);
	
	long long sum = 0;
	
	for (int i = 0; formula[i] != '\0'; i++)
	{
		if (formula[i] >= 'A' && formula[i] <= 'Z')
		{
			int col = formula[i] - 'A' + 1;
			
			int row = 0;
			i++;
			
			while (formula[i] != '\0' && isdigit(formula[i]))
			{
				row = row * 10 + (formula[i] - '0');
				
				i++;
			}
			
			sum += matrix[row][col];
			
			i--;
		}
	}
	
	printf("%lld\n", sum);
	
	return 0;
}
