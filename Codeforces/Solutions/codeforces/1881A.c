#include <stdio.h>
#include <string.h> // strcpy, strcat, strstr 都在这里

void solve()
{
    int n, m;
    scanf("%d %d", &n, &m);

    char x[2500];
    char s[50];
    scanf("%s", x);
    scanf("%s", s);

    int ops = 0;

    while (ops <= 6)
    {
        if (strstr(x, s) != NULL)
        {
            printf("%d\n", ops);
            return;
        }

        char temp[2500];
        strcpy(temp, x);
        strcat(x, temp); 

        ops++;
    }

    printf("-1\n");
}

int main()
{
    int t;
    if (scanf("%d", &t) != 1) return 0;
    
    while (t--)
    {
        solve();
    }
    
    return 0;
}