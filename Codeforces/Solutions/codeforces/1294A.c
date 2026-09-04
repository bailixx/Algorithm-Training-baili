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
    int a,b,c,n;
    scanf("%d %d %d %d", &a,&b,&c,&n);

    int max = 0;
    max = a > (b > c ? b : c) ? a : (b > c ? b : c);

    int req = 3 * max - a - b - c; // 算出填平首富差距所需的硬币总数

    if (n >= req && (n - req) % 3 == 0)
    {
        printf("YES\n");
    } 
    else
    {
        printf("NO\n");
    }
}