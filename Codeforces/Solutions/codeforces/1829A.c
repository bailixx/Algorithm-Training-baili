#include <stdio.h>
#include <string.h>

void solve();

int main()
{
    int t = 0;
    if(scanf("%d",&t) != 1) return 0;

    while(t--)
    {
        solve();
    }

    return 0;
}

void solve()
{
    char s1[15];
    scanf("%s",s1);

    char s[] = "codeforces";
    int count = 0;

    for (int i = 0; i < 10; i++)
    {
        if (s[i] != s1[i])
        {
            count++;
        }
    }

    printf("%d\n",count);

}