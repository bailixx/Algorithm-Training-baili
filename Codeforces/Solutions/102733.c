#include <stdio.h>

int main()
{
    long long ans = 0;

    for (int red = 0; red <= 255; red++)
    {
        for (int green = 0; green <=255; green++)
        {
            for (int blue = 0; blue <= 255; blue++)
            {
                if (blue > red && blue > green)
                {
                    ans++;
                }
            }
        }
    }

    printf("%d", ans);

    return 0;
}