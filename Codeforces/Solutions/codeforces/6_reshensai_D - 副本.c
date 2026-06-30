#include <stdio.h>

long long g(long long n) {
    long long s = 0;
    long long m = 1000000007;
    for (int i = 0; i < 62; i++) {
        long long p = 1LL << i;
        long long c = (n + 1) / (2 * p);
        s = (s + (c % m) * (p % m)) % m;
        long long r = (n + 1) % (2 * p);
        if (r > p) {
            s = (s + (r - p) % m) % m;
        }
    }
    return s;
}

void k() {
    long long n;
    if (scanf("%lld", &n) != 1) return;
    printf("%lld\n", g(n - 1));
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