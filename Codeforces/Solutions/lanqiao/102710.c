#include <stdio.h>

int main()
{
    int T = 0;
    
    if (scanf("%d", &T) != 1) return 0;

    while (T--)
    {
        long long A, B, C, K;
        scanf("%lld %lld %lld %lld", &A, &B, &C, &K);

        for (long long j = 0; j < K; j++)
        {
            if (A == B && B == C)
            {
                break; 
            }

            long long A_NEW = (B + C) / 2;
            long long B_NEW = (A + C) / 2;
            long long C_NEW = (A + B) / 2;

            A = A_NEW;
            B = B_NEW;
            C = C_NEW;
        }

        printf("%lld %lld %lld\n", A, B, C);
    }

    return 0;
}