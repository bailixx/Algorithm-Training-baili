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
    int n = 0;
    scanf("%d", &n);

    char a[3][105];
    int num = 0;
    
    scanf("%s", a[0]); 
    scanf("%s", a[1]);

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(a[i][j] == 'B')
            {
                a[i][j] = 'G';
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        if(a[0][i] == a[1][i])
        {
            num++;
        }
    }

    if(num == n) printf("YES\n");
    if(num != n) printf("NO\n");

}