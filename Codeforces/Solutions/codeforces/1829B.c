#include <stdio.h>

void solve()
{
    int n;
    scanf("%d", &n);

    int max_blank = 0;
    int current_blank = 0;

    for (int i = 0; i < n; i++)
    {
        int a;
        scanf("%d", &a);

        if (a == 0)
        {
            current_blank++;
            
            if (current_blank > max_blank)
            {
                max_blank = current_blank;
            }
        } 
        else
        {
            current_blank = 0; 
        }
    }


    printf("%d\n", max_blank);
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