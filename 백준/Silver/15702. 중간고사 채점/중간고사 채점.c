#include <stdio.h>

typedef struct {
    int number;
    int score;
} Student;

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    int weights[100];
    for (int i = 0; i < m; i++) {
        scanf("%d", &weights[i]);
    }

    Student students[100];

    for (int i = 0; i < n; i++) {
        students[i].score = 0;
        scanf("%d", &students[i].number);

        for(int j = 0; j < m; j++) {
            char answer;
            scanf(" %c", &answer);
            if (answer == 'O') {
                students[i].score += weights[j];
            }
        }
    }
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-1-i; j++) {
            if (students[j].score < students[j+1].score || (students[j].score == students[j+1].score && students[j].number > students[j+1].number)) {
                Student tmp = students[j];
                students[j] = students[j+1];
                students[j+1] = tmp;
            }
        }
    }

    printf("%d %d", students[0].number, students[0].score);
    return 0;
}