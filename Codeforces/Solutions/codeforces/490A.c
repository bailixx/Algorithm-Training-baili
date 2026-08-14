#include <stdio.h>

int min3(int a, int b, int c)
{
    int min_val = a < b ? a : b;
    return min_val < c ? min_val : c;
}

int main()
{
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int t1[5005], t2[5005], t3[5005];

    int c1 = 0, c2 = 0, c3 = 0;

    for (int i = 1; i <= n; i++)
    {
        int skill;
        scanf("%d", &skill);

        if (skill == 1)
        {
            t1[c1] = i;
            c1++;
        } 

        else if (skill == 2)
        {
            t2[c2] = i;
            c2++;
        } 

        else if (skill == 3)
        {
            t3[c3] = i;
            c3++;
        }
    }

    int w = min3(c1, c2, c3);

    printf("%d\n", w);

    for (int i = 0; i < w; i++)
    {
        printf("%d %d %d\n", t1[i], t2[i], t3[i]);
    }

    return 0;
}