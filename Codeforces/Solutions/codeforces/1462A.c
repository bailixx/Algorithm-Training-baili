#include <stdio.h>

void solve();

int main()
{
    int t = 0;
    if(scanf("%d", &t) != 1) return 0;

    while(t--)
    {
        solve();
    }

    return 0;
}

void solve()
{
    int n = 0;
    scanf("%d", &n);

    int b[305];
    int left = 0;
    int right = n - 1;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    while(left <= right)
    {
        printf("%d ", b[left]);
        left++;

        if(left > right)
        {
            break;
        }

        printf("%d ", b[right]);
        right--;
    }

    printf("\n");
}