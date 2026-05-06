#include <stdio.h>

int b[200005];

void f() {
    int n;
    if (scanf("%d", &n) != 1) return;
    int m = -1;
    for (int i = 0; i <= n + 1; i++) b[i] = 0;
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        if (x > m) m = x;
        if (x <= n + 1) b[x] = 1;
    }
    int k = 0;
    while (b[k]) k++;
    
    long long s = (long long)n * m;
    s += (m == 0 ? 1 : 0);
    
    int c = 0;
    for (int i = 0; i < k; i++) {
        if (i == m) continue;
        c++;
        int y = i + 1;
        if (y == m) y++;
        s += y;
    }
    
    s += (long long)(n - 1 - c) * k;
    printf("%lld\n", s);
}

int main() {
    int t;
    if (scanf("%d", &t) == 1) {
        while (t--) {
            f();
        }
    }
    return 0;
}