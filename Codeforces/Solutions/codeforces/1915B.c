#include <stdio.h>
#include <string.h>

void solve()
{
    char s[5];

    for(int i = 0; i < 3; i++)
    {
        scanf("%s", s);
        
        if(s[0] == '?' || s[1] == '?' || s[2] == '?')
        {
            int has_A = 0, has_B = 0, has_C = 0;
            
            for(int j = 0; j < 3; j++)
            {
                if(s[j] == 'A') has_A = 1;
                if(s[j] == 'B') has_B = 1;
                if(s[j] == 'C') has_C = 1;
            }
            
            if(has_A == 0) printf("A\n");
            else if(has_B == 0) printf("B\n");
            else if(has_C == 0) printf("C\n");
        }
    }
}

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