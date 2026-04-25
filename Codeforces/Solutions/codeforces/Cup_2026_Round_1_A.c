#include <stdio.h>

int gcd (int a, int b)
{
    return b == 0 ? a : gcd(b , a % b);
}

void water()
{
    int n;
    scanf("%d", &n);

    int tree = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        scanf("%d", &a);

        int d = 100 / a;

        if (i == 0)
        {
            tree = d;
        }
        else
        {
            tree = gcd(tree, d);
        }
    }
    
    if (tree == 1) printf("Yes\n");

    else printf("No\n");
    
}

int main()
{
    int t;
    if (scanf("%d", &t) != 1) return 0;

    while(t--)
    {
        water();
    }

    return 0;
}