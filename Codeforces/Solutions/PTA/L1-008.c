#include <stdio.h>

int main()
{
    int A, B;
    if (scanf("%d %d", &A, &B) != 2) return 0;
    
    int sum = 0;
    int count = 0;

    for (int i = A; i < B+1; i++)
    {
        printf("%5d", i);
        sum += i;
        count++;

        if (count % 5 == 0)
        {
            printf("\n");
        }
    }

    if (count % 5 != 0)
    {
        printf("\n");
    }

    printf("Sum = %d\n", sum);

    return 0;
}