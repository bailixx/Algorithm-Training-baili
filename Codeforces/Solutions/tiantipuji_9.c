#include <stdio.h>
#include <stdlib.h>

int parent[10005];
int min_val[10005];
int exists[10005]; 

int find(int i)
{
    if (parent[i] == i)
        return i;
    return parent[i] = find(parent[i]);
}

void unite(int i, int j)
{
    int root_i = find(i);
    int root_j = find(j);
    if (root_i != root_j)
    {
        parent[root_i] = root_j;
    }
}

// 比较函数用于最后的升序输出
int compare(const void *a, const void *b) 
{
    return (*(int*)a - *(int*)b);
}

int main() {
    int n, m;
    if (scanf("%d %d", &n, &m) != 2) return 0;

    for (int i = 1; i <= m; i++)
    {
        parent[i] = i;
    }

    for (int i = 0; i < n; i++)
    {
        int k, first, other;
        scanf("%d", &k);
        if (k > 0)
        {
            scanf("%d", &first);
            exists[first] = 1;
            for (int j = 1; j < k; j++)
            {
                scanf("%d", &other);
                exists[other] = 1;
                unite(first, other); 
            }
        }
    }

    for (int i = 1; i <= m; i++) min_val[i] = m + 1;

    for (int i = 1; i <= m; i++)
    {
        if (exists[i])
        {
            int root = find(i);
            if (i < min_val[root])
            {
                min_val[root] = i;
            }
        }
    }

    int result[10005], res_count = 0;

    for (int i = 1; i <= m; i++)
    {
        if (parent[i] == i && min_val[i] <= m)
        {
            result[res_count++] = min_val[i];
        }
    }

    qsort(result, res_count, sizeof(int), compare);
    
    for (int i = 0; i < res_count; i++)
    {
        printf("%d%c", result[i], i == res_count - 1 ? '\n' : ' ');
    }

    return 0;
}