#include <stdio.h>
#include <stdlib.h>

long long A[100005];
int N;

int cmp(const void *a, const void *b)
{
    if(*(long long*)a > *(long long*)b)
    {
        return 1;
    }
    if(*(long long*)a < *(long long*)b)
    {
        return -1;
    }
    return 0;
}

int check(long long mid)
{
    long long current_power = mid;
    for (int i = 0; i < N; i++)
    {
        if (current_power < A[i])
        {
            return 0;
        }
        else
        {
            current_power += A[i] / 2;
        }

    }
    return 1;
}

int main()
{
    scanf("%d\n", &N);
    
    for (int b=0; b < N; b++)
    {
        scanf("%lld", &A[b]);
    }

    qsort (A, N, sizeof(long long), cmp);

    long long left = 1;
    long long right = 1000000000;
    long long ans = right;

    while (left <= right)
    {
        long long mid = left + (right - left) / 2;

        if (check(mid))
        {
            ans = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    printf("%lld", ans);

    return 0;
    
}