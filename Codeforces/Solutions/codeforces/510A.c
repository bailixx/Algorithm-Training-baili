#include <stdio.h>

int main()
{
    int n,m;
    if((scanf("%d %d",&n,&m) != 2) && (n >= 3) && (m >= 3) && (n <= 50) && (m <= 50) && (n % 2 == 1)) return 0;

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            for (int j = 0; j < m; j++) putchar('#');
        } else if (i % 4 == 2) {
            for (int j = 0; j < m - 1; j++) putchar('.');
            putchar('#');
        } else {
            putchar('#');
            for (int j = 0; j < m - 1; j++) putchar('.');
        }
        putchar('\n');
    }

    return 0;

}