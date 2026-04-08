#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int n = 0;
    scanf("%d", &n);

    int c = 0; // 把 ans 改成 c，符合题目里的“晶体长度 c”

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &c);
    
        // 你完美的整数平方比较逻辑，一字不改！
        if( c * c <= ((a * a) + (b * b)))
        {
            printf("YES\n"); // 加上 \n 换行！
        }
        else
        {
            printf("NO\n");  // 加上 \n 换行！
        }
    }
    return 0;
}