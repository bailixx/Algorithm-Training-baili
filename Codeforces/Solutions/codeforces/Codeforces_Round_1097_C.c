#include <stdio.h>

char a[200005], b[200005];

void k() {
    int n;
    if (scanf("%d", &n) != 1) return;
    scanf("%s %s", a, b);
    int x = 0, y = 0;
    for (int i = 0; i < n; i++) {
        int v = (a[i] == '(' ? 1 : -1) + (b[i] == '(' ? 1 : -1);
        if (v == 2) {
            x++; y++;
        } else if (v == -2) {
            x--; y--;
        } else {
            if (x < y) {
                x++; y--;
            } else {
                x--; y++;
            }
        }
        if (x < 0 || y < 0) {
            printf("NO\n");
            return;
        }
    }
    if (x == 0 && y == 0) printf("YES\n");
    else printf("NO\n");
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