#include <stdio.h>

int main()
{
    int a, b, c;
    
    scanf("%d %d %d", &a, &b, &c);

    int max_single = a > b ? (a > c ? a : c) : (b > c ? b : c);

    int sum_others = (a + b + c) - max_single;

    int ans = max_single > sum_others ? max_single : sum_others;

    printf("%d\n", ans);

    return 0;
}