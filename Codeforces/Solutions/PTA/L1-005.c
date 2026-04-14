#include <stdio.h>

typedef struct
{
    char id[17];    
    int exam_seat;
} Student;

Student students[1005];

int main() {
    int n, m;
    
    if (scanf("%d", &n) != 1) return 0;

    for (int i = 0; i < n; i++)
    {
        char temp_id[17];
        int trial_seat, exam_seat;
        scanf("%s %d %d", temp_id, &trial_seat, &exam_seat);
        
        for(int j = 0; j < 17; j++)
        {
            students[trial_seat].id[j] = temp_id[j];
        }
        students[trial_seat].exam_seat = exam_seat;
    }

    scanf("%d", &m);

    for (int i = 0; i < m; i++)
    {
        int query_trial;
        scanf("%d", &query_trial);
    
        printf("%s %d\n", students[query_trial].id, students[query_trial].exam_seat);
    }

    return 0;
}