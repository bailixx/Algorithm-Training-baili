#include <stdio.h>

void k() {
    int n;
    if (scanf("%d", &n) != 1) return;
    long long a[200005];
    for (int i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
    }
    int c = 0;
    long long s = 0;
    for (int i = n - 1; i >= 0; i--) {
        s += a[i];
        if (s > 0) {
            c++;
            s = 0;
        }
    }
    printf("%d\n", c);
}

int main() {
    int t;
    if (scanf("%d", &t) == 1) {
        while (t--) {
            k();
        }
    }
    return 0;
}