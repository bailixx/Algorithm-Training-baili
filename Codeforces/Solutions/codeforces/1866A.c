#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N = 0;
    if(scanf("%d", &N) != 1) return 0;

    int min = 100005;
    int num = 0;

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &num);
        int a = abs(num);

        min = min < a ? min : a;
    }

    printf("%d\n", min);

    return 0;
}