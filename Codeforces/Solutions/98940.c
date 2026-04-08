#include <stdio.h>
#include <string.h> 

int q[100005];

int head = 0; 
int tail = 0; 

int main() 
{
    int m;
    if (scanf("%d", &m) != 1) return 0;


    char op[20]; 

    for (int i = 0; i < m; i++) 
    {
        scanf("%s", op); 


        if (strcmp(op, "push") == 0) 
        {
            int x;
            scanf("%d", &x);
            q[tail] = x; 
            tail++;      
        }
    
        else if (strcmp(op, "pop") == 0) 
        {

            if (head < tail) 
            {
                head++; 
            }
        }
    
        else if (strcmp(op, "empty") == 0) 
        {
            if (head == tail) 
            {
                printf("YES\n");
            }
            else 
            {
                printf("NO\n");
            }
        }

        else if (strcmp(op, "query") == 0) 
        {
            if (head == tail) 
            {
                printf("empty\n"); 
            }
            else 
            {
                printf("%d\n", q[head]); 
            }
        }
    }

    return 0;
}