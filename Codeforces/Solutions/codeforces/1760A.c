#include <stdio.h>

void solve();

int main()
{
    int t = 0;
    if (scanf("%d", &t) != 1) return 0;
    
    while(t--)
    {
        solve();
    }
}

void solve()
{
    int max,min,medium;
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);

    max = a > ((b > c) ? b : c) ? a : ((b > c) ? b : c);
    min = a < ((b < c) ? b : c) ? a : ((b < c) ? b : c);
    medium = a + b + c - max - min;
    printf("%d\n",medium);
}