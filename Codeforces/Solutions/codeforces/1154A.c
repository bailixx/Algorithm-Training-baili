#include <stdio.h>

int main()
{
    int a,b,c,d,e,f,g;
    if (scanf("%d %d %d %d", &d,&e,&f,&g) != 4) return 0;

    int max = 0;
    max = d > (e > (f > g ? f : g) ? e : (f > g ? f : g)) ? d : (e > (f > g ? f : g) ? e : (f > g ? f : g));

    if (max == d)
    {
        a = max - e;
        b = max - f;
        c = max - g;
        printf("%d %d %d", a, b, c);
    }
    if (max == e)
    {
        a = max - d;
        b = max - f;
        c = max - g;
        printf("%d %d %d", a, b, c);
    }
    if (max == f)
    {
        a = max - e;
        b = max - d;
        c = max - g;
        printf("%d %d %d", a, b, c);
    }
    if (max == g)
    {
        a = max - e;
        b = max - f;
        c = max - d;
        printf("%d %d %d", a, b, c);
    }

    return 0;
}