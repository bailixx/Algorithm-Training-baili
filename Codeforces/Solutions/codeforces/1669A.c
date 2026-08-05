#include <stdio.h>

int main()
{
    int t = 0;
    if (scanf("%d", &t) != 1) return 0;

    int rating = 0;

    while(t--)
    {
        scanf("%d", &rating);

        if (rating >= 1900) printf("Division 1\n");
        if (rating >= 1600 && rating <= 1899) printf("Division 2\n");
        if (rating >= 1400 && rating <= 1599) printf("Division 3\n");
        if (rating <= 1399) printf("Division 4\n");
    
    }

    return 0;
}