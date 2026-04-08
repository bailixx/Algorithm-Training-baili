#include <stdio.h>

int main()
{
    int ans = 0;

    int n = 0;
    scanf("%d\n", &n);

    long long a[100005];

    for (int water = 0; water < n; water++)
    {
        scanf("%lld", &a[water]);
    }

    int oushu_number = 0;
    int jishu_number = 0;

    for (int tree = 0; tree < n; tree++)
    {
        if (a[tree] % 2 == 0)
        {
            oushu_number++;
        }
        else
        {
            jishu_number++;
        }

        if (oushu_number == jishu_number)
        {
            ans++;
        }
    }


    if (oushu_number == jishu_number)
    {
        printf("%d", ans);
    }
    else
    {
        printf("-1");
    }

    return 0;

}