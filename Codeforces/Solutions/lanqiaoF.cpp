#include <stdio.h>

void dfs
{
	int x, y;
	
	dfs(x-1, y-1);
	dfs(x+1, y+1);
	dfs(x-2, y-2);
	dfs(x+2, y+2);
}

void bfs
{
	int x, y;
	
	bfs(x-1, y-1);
	bfs(x+1, y+1);
	bfs(x-2, y-2);
	bfs(x+2, y+2);
}
}


int main()
{	

	int ans = 0;
	int num = 0;
	
	int N, M;
	if (scanf("%d %d", &N, &M) != 2) return 0;
	
	for (int i = 0; i < M; i++)
	{
		if (scanf("%d %d", &a, &b) != 2) return 0;
	}

	bfs(a,b);
	dfs(a,b);
	
	
	printf("%d %d", ans, num);
	
	return 0;
	
}
