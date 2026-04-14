#include <stdio.h>

int main()
{
    int x, n, y;
    if (scanf("%d %d %d", &x, &n, &y) != 3 && x<1 && y<1 && n<1)  return 0;

    int ans = 0;
    ans = x * n + y;

    printf("%d", ans);

    return 0;
}