#include <stdio.h>

int main()
{
    int count = 0;
    
    for (int i = 1; i <= 202504; i++)
    {
        int gewei = i % 10;
        int shiwei =  (i / 10) % 10;
        int baiwei = (i / 100) % 10;
        int qianwei = (i / 1000) % 10;
        int wanwei = (i / 10000) % 10;
        int shiwan = (i / 100000) % 10;

        int answer = gewei + shiwei + baiwei + qianwei + wanwei + shiwan;

        if (answer % 5 == 0)
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}