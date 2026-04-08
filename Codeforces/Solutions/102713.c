#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

bool is_number(int x)
{
    if (x <= 1) return false;
    if (x == 2) return true;
    if (x % 2 == 0) return false;

    int limit = (int)sqrt(x);
    for (int i = 3;  i <= limit; i += 2)
    {
        if (x % i == 0)
        {
            return false;
        }
    }

    return true;
}

bool seen[40005];

int main() 
{
    int n, m;
    scanf("%d %d", &n, &m);

    int num = 0;

    static int a[20005], b[20005];
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int d = 0; d < m; d++)
    {
        scanf("%d", &b[d]);
    }

     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int S = a[i] + b[j];

            if (S <= n + m && is_number(S) &&!seen[S])
            {
                seen[S] = true;
                num++;
            }
           
        }
    }

    printf("%d", num);

    return 0;
}

/*新的写法
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_SUM 200005

int a[100005];
int b[100005];
bool is_prime[MAX_SUM];
bool seen[MAX_SUM];

int cmp(const void *p1, const void *p2) {
    return (*(int*)p1 - *(int*)p2);
}

int main() 
{
    int n, m;
    if (scanf("%d %d", &n, &m) != 2) return 0;

    for (int i = 2; i <= n + m; i++) {
        is_prime[i] = true;
    }

    for (int i = 2; i * i <= n + m; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n + m; j += i) {
                is_prime[j] = false;
            }
        }
    }

    int n_valid = 0;
    for (int i = 0; i < n; i++) {
        int val;
        scanf("%d", &val);
        
        if (val < n + m) {
            a[n_valid++] = val;
        }
    }

    int m_valid = 0;
    for (int i = 0; i < m; i++) {
        int val;
        scanf("%d", &val);
        if (val < n + m) {
            b[m_valid++] = val;
        }
    }


    qsort(b, m_valid, sizeof(int), cmp);

    int num = 0;

    for (int i = 0; i < n_valid; i++) {
        for (int j = 0; j < m_valid; j++) {
            int S = a[i] + b[j];

            if (S > n + m) {
                break;
            }

            if (is_prime[S] && !seen[S]) {
                seen[S] = true;
                num++;
            }
        }
    }

    printf("%d\n", num);

    return 0;
}
*/