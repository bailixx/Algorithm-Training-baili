#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int s = 0;
    char w[20];

    while (n--) {
        scanf("%s", w);
        if (w[0] == 'T') s += 4;
        else if (w[0] == 'C') s += 6;
        else if (w[0] == 'O') s += 8;
        else if (w[0] == 'D') s += 12;
        else if (w[0] == 'I') s += 20;
    }

    printf("%d\n", s);

    return 0;
}