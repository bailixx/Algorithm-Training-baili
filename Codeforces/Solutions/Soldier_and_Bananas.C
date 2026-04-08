#include <stdio.h>

int main()
{
    int n,k,w;
    scanf("%d %d %d", &k, &n, &w);

    int money = 0;
    int need_money = 0;

    for(int i = 1; i <= w; i++)
    {
        money += i * k;
    }

    need_money = money - n;

    if(n >= money)
    {
        printf("0\n");
        return 0;
    }
    else
    {
        printf("%d", need_money);
        return 0;
    }

}