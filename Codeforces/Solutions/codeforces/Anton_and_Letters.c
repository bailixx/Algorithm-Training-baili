#include <stdio.h>

int main() {
    int c;
    int s[256] = {0};
    int k = 0;

    while ((c = getchar()) != '\n' && c != EOF) {
        if (c >= 'a' && c <= 'z') {
            if (s[c] == 0) {
                s[c] = 1;
                k++;
            }
        }
    }
    
    printf("%d\n", k);
    
    return 0;
}