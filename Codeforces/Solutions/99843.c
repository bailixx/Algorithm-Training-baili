#include <stdio.h>
#include <stdbool.h>

int scores[10] = {5, 5, 10, 10, 15, 15, 20, 20, 25, 25};

bool seen[200]; 

void dfs(int step, int current_sum) 
{
    if (step == 10) 
    {
        seen[current_sum] = true;
        return; 
    }

    dfs(step + 1, current_sum);

    dfs(step + 1, current_sum + scores[step]);
}

int main() 
{
    dfs(0, 0);

    int ans = 0;
    for (int i = 0; i <= 150; i++) 
    {
        if (seen[i] == true) 
        {
            ans++;
        }
    }

    printf("%d\n", ans);

    return 0;
}