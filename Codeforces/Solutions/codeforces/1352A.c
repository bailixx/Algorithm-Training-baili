#include <stdio.h>

void solve();

int main()
{
    int t = 0;
    if(scanf("%d", &t) != 1) return 0;

    while(t--)
    {
        solve();
    }

    return 0;
}

void solve()
{
    int num = 0;
    scanf("%d", &num);
    
    int base = 1;       
    int count = 0;      
    int ans[10];        
    
    while (num > 0)
    {
        int a = num % 10;
        
        if (a != 0)
        {
            ans[count] = a * base;
            count++;
        }
        
        num = num / 10;     
        base = base * 10;
    }       
    
    printf("%d\n", count);
    
    for (int i = 0; i < count; i++)
    {
        printf("%d ", ans[i]);
    }
    printf("\n"); 
}