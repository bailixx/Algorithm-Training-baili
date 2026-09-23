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
    int a,b,c;
    scanf("%d %d %d\n", &a, &b, &c);

    for (int i = 0; i < 5; i++)
    {
        if (a <= b && a <= c) 
        {
            a++;
        }
        else if (b <= a && b <= c) 
        {
            b++;
        }
        else 
        {
            c++;
        }
    }
    int max_product = a * b * c;

    printf("%d\n", max_product);
}