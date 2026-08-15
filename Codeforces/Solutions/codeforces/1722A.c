#include <stdio.h>
#include <string.h>

void solve();

int main()
{
    int t = 0;
    if (scanf("%d",&t) != 1) return 0;

    while(t--)
    {
        solve();
    }
    return 0;
}
void solve()
{
    int n;
    scanf("%d", &n);

    char s[20];
    scanf("%s", s);

    if(n != 5)
    {
        printf("NO\n");
        return;
    }

    int count_T = 0, count_i = 0, count_m = 0, count_u = 0, count_r = 0;

    for (int i = 0; i < 5; i++)
    {
        if (s[i] == 'T') count_T++;
        if (s[i] == 'i') count_i++;
        if (s[i] == 'm') count_m++;
        if (s[i] == 'u') count_u++;
        if (s[i] == 'r') count_r++;
    }

    if(count_T == 1 && count_i == 1 && count_m == 1 && count_u == 1 && count_r == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}