#include <stdio.h>
#include <string.h>

int main()
{
    char a[100005];
    scanf("%s", &a);
    
    int len = strlen(a);


    for (int n = 0; n < len; n++)
    {
        if (a[n] >= 'a' && a[n] <= 'z')
        {
            a[n] = 'L';
        }
        if (a[n] >= '0' && a[n] <= '9')
        {
            a[n] = 'Q';
        }
    }

    printf("%s\n", a);

    return 0;

}