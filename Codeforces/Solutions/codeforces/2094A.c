#include <stdio.h>
#include <string.h>

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
    char s1[15],s2[15],s3[15];
    scanf("%s %s %s", s1,s2,s3);

    printf("%c%c%c\n", s1[0], s2[0], s3[0]);
}