#include <stdio.h>
#include <stdlib.h>

int a[200005];
int b[200005];
int c[200005];
int d[200005];

int f(const void* x, const void* y) {
    int p = *(const int*)x;
    int q = *(const int*)y;
    if (p < q) return -1;
    if (p > q) return 1;
    return 0;
}

int g(int m, int n) {
    for (int i = 0; i < m; i++) b[i] = 0;
    int k = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < m && b[a[i]] == 0) {
            b[a[i]] = 1;
        } else {
            c[k++] = a[i];
        }
    }
    int l = 0;
    for (int i = 0; i < m; i++) {
        if (b[i] == 0) {
            d[l++] = i;
        }
    }
    int j = 0;
    for (int i = 0; i < l; i++) {
        int r = d[i];
        while (j < k && c[j] < 2 * r + 1) {
            j++;
        }
        if (j == k) return 0;
        j++;
    }
    return 1;
}

void h() {
    int n;
    if (scanf("%d", &n) != 1) return;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    qsort(a, n, sizeof(int), f);
    int l = 0, r = n + 1;
    while (l + 1 < r) {
        int m = l + (r - l) / 2;
        if (g(m, n)) {
            l = m;
        } else {
            r = m;
        }
    }
    printf("%d\n", l);
}

int main() {
    int t;
    if (scanf("%d", &t) == 1) {
        while (t--) {
            h();
        }
    }
    return 0;
}