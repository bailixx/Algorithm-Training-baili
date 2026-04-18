#include <stdio.h>

int main()
{
	int n = 0;
	if (scanf("%d", &n) != 1) return 0;
	
	int bianhao = 0, num = 0;
	
	int b[100005];
	
	int min = 100005;

    int q = 0;
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &bianhao, &num);
		
		if (num == 0)
		{
			b[i] = bianhao;
            q++;
		}
		if (num != 0)
		{
			b[i] = 100001;
		}
	}
	
	for (int i = 0; i < n; i++)
	{
        if (b[i] != 100001)
        {
            printf("%d", b[i]);
        }
	}
    if (q == 0)
    {
        printf("NONE");
    }
    
	return 0;
}
