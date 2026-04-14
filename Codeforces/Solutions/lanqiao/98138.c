#include <stdio.h>

int n, m;

int path[30]; 

void dfs(int u, int start) 
{
    if (u > m) 
    {
        for (int i = 1; i <= m; i++) 
        {
            printf("%d ", path[i]);
        }
        printf("\n"); 
        
        return; 
    }

    for (int i = start; i <= n; i++) 
    {
        path[u] = i; 
        
        dfs(u + 1, i + 1); 
        
    }
}

int main() 
{
    if (scanf("%d %d", &n, &m) != 2) return 0;
    
    dfs(1, 1);
    
    return 0;
}