#include <stdio.h>

int main() {
    int k, l, m, n, d;
    if (scanf("%d%d%d%d%d", &k, &l, &m, &n, &d) != 5) return 0;

    int c = 0;
    for (int i = 1; i <= d; i++) {
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) {
            c++;
        }
    }

    printf("%d\n", c);

    return 0;
}