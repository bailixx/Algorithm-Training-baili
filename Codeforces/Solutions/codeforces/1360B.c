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

    int min = 2000;

   int s[55];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &s[i]);
    }

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - 1 - i; j++)
        {
            if(s[j] > s[j+1])
            {
                int temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }

    for (int j = 1; j < n; j++)
    {
        min = min < (s[j] - s[j-1]) ? min : (s[j] - s[j-1]);
    }

    printf("%d\n",min);

}