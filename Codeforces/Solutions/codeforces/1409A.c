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
    int a, b;
    scanf("%d %d", &a, &b);

    // 计算绝对差值
    int max = a > b ? a : b;
    int min = a < b ? a : b;
    int diff = max - min;

    // 完美覆盖所有情况的极简逻辑
    if (diff % 10 == 0) 
    {
        printf("%d\n", diff / 10);
    } 
    else 
    {
        printf("%d\n", (diff / 10) + 1);
    }
}