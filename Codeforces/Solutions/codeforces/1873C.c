#include <stdio.h>

int min(int a, int b)
{
    return a < b ? a : b;
}

void solve() {
    char grid[10][15];
    int total_score = 0;
    
    for (int i = 0; i < 10; i++)
    {
        scanf("%s", grid[i]); 
    }
    
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (grid[i][j] == 'X')
            {
                int vertical_min = min(i, 9 - i);

                int horizontal_min = min(j, 9 - j);
                
                int min_dist = min(vertical_min, horizontal_min);
                
                total_score += (min_dist + 1);
            }
            
        }
    }
    
    printf("%d\n", total_score);
}

int main()
{
    int t;
    if (scanf("%d", &t) != 1) return 0;
    
    while (t--)
    {
        solve();
    }
    
    return 0;
}