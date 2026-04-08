/**#include <stdio.h>

int path[50];
int n = 0;

void dfs(int u, int start)
{
    if (u > (n * (n - 1) / 2))
    {
        for (int i = 1; i <= n*(n-1)/2; i++)
        {
            printf("%d", path[i]);
        }

        printf("\n");

        return;
    }

    for (int i = start; i <= n; i++)
    {
        path[u] = i;

        dfs(u+1, i+1);
    }
}
int main()
{
    if (scanf("%d", &n) != 1) return 0;

    for (int i = 0; i < n * (n - 1) / 2; i++)
    {
        dfs (1,1);
    }

    return 0;

}**/

#include <stdio.h>
#include <stdbool.h> 

int n;
int path[15];
bool st[15];

void dfs(int u) 
{
    if (u > n) 
    {
        for (int i = 1; i <= n; i++) 
        {
            printf("%d ", path[i]);
        }
        printf("\n");
        return; 
    }

    for (int i = 1; i <= n; i++) 
    {
        if (st[i] == false) 
        {
            path[u] = i;    
            st[i] = true;   

            dfs(u + 1);

            st[i] = false; 
        }
    }
}

int main() 
{
    if (scanf("%d", &n) != 1) return 0;

    dfs(1);

    return 0;
}