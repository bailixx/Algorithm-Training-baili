#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int max = a;
    max = max > (b > c ? b : c) ? max : (b > c ? b : c);

    if (a <= b + c && b <= a + c && c <= a + b)
    {
        printf("-1");

        return 0;
    }
    else
    {
        if (max == a) printf("l");
        if (max == b) printf("q");
        if (max == c) printf("b");

    }
    
    return 0;
}