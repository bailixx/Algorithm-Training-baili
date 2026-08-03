#include <stdio.h>

int main()
{
    int a, b, c;
    if(scanf("%d %d %d", &a,&b,&c) != 3) return 0;

    int max = 0;
    int min = 0;
    int min_road = 0;

    max = a > ((b>c)?b:c) ? a : ((b>c)?b:c);
    min = a < ((b<c)?b:c) ? a : ((b<c)?b:c);

    //middle = a + b + c - max - min;

    min_road = max - min; //??wtf

    printf("%d", min_road);

    return 0;    
}