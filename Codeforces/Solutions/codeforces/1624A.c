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

    int a[55];
    
    int max = 0, min = 1e9;
    int num = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

        max = a[i] > max ? a[i] : max;
        min = min < a[i] ? min : a[i];
    }

    num = max - min;

    printf("%d\n", num);
}