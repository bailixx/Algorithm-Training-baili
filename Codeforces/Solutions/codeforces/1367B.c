#include <stdio.h>
#include <math.h>

void solve();

int main()
{
    int t = 0;
    if(scanf("%d",&t) != 1) return 0;

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

    int arr[45];
    
    int bad_even = 0;
    int bad_odd = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        if (i % 2 == 0 && arr[i] % 2 != 0)
        {
            bad_even++;
        } 
        else if (i % 2 != 0 && arr[i] % 2 == 0)
        {
            bad_odd++;
        }
    }

    if (bad_even == bad_odd)
    {
        printf("%d\n", bad_even);
    }
    else
    {
        printf("-1\n");
    }
}