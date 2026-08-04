#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int score;
    int max_score, min_score;
    int amazing_count = 0;

    scanf("%d", &score);
    max_score = score;
    min_score = score;

    for (int i = 1; i < n; i++)
    {
        scanf("%d", &score);
        if (score > max_score)
        {
            amazing_count++;
            max_score = score;
        } 

        else if (score < min_score)
        {
            amazing_count++;
            min_score = score;
        }

    }

    printf("%d\n", amazing_count);

    return 0;
}