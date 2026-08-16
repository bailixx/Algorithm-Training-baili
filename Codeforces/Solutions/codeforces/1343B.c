#include <stdio.h>

void solve() {
    int n;
    scanf("%d", &n);

    if ((n / 2) % 2 != 0)
    {
        printf("NO\n");
        return; 
    }

    printf("YES\n");

    int current_even = 2;
    for (int i = 0; i < n / 2; i++)
    {
        printf("%d ", current_even);
        current_even += 2;
    }

    int current_odd = 1;
    for (int i = 0; i < (n / 2) - 1; i++)
    {
        printf("%d ", current_odd);
        current_odd += 2;
    }

    printf("%d\n", current_odd + (n / 2));
}

int main()
{
    int t;
    if (scanf("%d", &t) != 1) return 0;
    
    while (t--)
    {
        solve();
    }
    
    return 0;
}