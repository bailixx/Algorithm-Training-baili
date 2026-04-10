#include <stdio.h>

int main()
{
    int H = 0;
    int h1, h2;

    if (scanf("%d %d %d", &H, &h1, &h2) != 3) return 0;

    printf("%d\n", H);

    if (H < h1)
    {
        printf("Bu Kan");
    }
    if (H >= h1 && H < h2)
    {
        printf("Zhe Gua Bao Shu Ma");
    }
    if (H >= h2)
    {
        printf("Chi Gua");
    }

    return 0;
}