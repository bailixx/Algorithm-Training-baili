#include <stdio.h>

int main() {
    int n;
    
    scanf("%d", &n);
    
    int result[105]; 
    
    for (int i = 1; i <= n; i++) {
        int receiver;
         scanf("%d", &receiver); 
        
    
        result[receiver] = i;
    }
    
    for (int i = 1; i <= n; i++) {
        printf("%d ", result[i]);
    }
    
    printf("\n"); 
    
    return 0;
}