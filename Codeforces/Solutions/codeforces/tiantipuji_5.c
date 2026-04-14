#include <stdio.h>

int main() {
    int A, B;
    if (scanf("%d %d", &A, &B) != 2) return 0;
    int target = A + B;

    int guess;
    int count = 0;
    int final_guess = 0; 
    int final_time = 0;    
    int success = 0;       

    while (scanf("%d", &guess) != EOF) {
        count++;
        int current_time = 1 + (count - 1) * 2; 

        if (current_time > 10800) break;

        final_guess = guess;
        final_time = current_time;

        if (guess == target) {
            success = 1; 
            break;   
        }
    }

    int h = final_time / 3600;
    int m = (final_time % 3600) / 60;
    int s = final_time % 60;

    if (success)
    {
        printf("%d Accepted %02d:%02d:%02d\n", final_guess, h, m, s);
    } else
    {
        printf("%d Wrong Answer %02d:%02d:%02d\n", final_guess, h, m, s);
    }

    return 0;
}