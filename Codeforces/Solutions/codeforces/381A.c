#include <stdio.h>

int main()
{
    int n;
    if (scanf("%d", &n) != 1) return 0;
    
    int cards[1005];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &cards[i]);
    }
    
    int left = 0;
    int right = n - 1;
    
    int sereja_score = 0;
    int dima_score = 0;
    
    int turn = 0; 
    
    while (left <= right)
    {
        int chosen_card;
        
        if (cards[left] > cards[right])
        {
            chosen_card = cards[left];
            left++;
        }
        else
        {
            chosen_card = cards[right];
            right--;
        }
        
        if (turn == 0)
        {
            sereja_score += chosen_card;
        }
        else
        {
            dima_score += chosen_card;
        }
        
        turn = 1 - turn;
    }
    
    printf("%d %d\n", sereja_score, dima_score);
    
    return 0;
}