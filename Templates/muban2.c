#include <stdio.h>

int main()
{
    int a, b;
    // scanf 的返回值是成功读取的变量个数
    // 当读到文件末尾时，它会返回 EOF（通常是 -1）
    while (scanf("%d %d", &a, &b) != EOF)
    {
        printf("%d\n", a + b);
    }
    
    return 0;
}

//进阶模版：无限多组数据（最常见）
//题目会说：“输入包含多组测试数据，请处理到文件末尾（EOF）”