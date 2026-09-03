#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

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
    char W[15];
    scanf("%s", W);

    int len = strlen(W);

    W[len-1] = '\0';
    W[len-2] = 'i';

    printf("%s\n", W);
}