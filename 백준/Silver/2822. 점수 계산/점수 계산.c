#include <stdio.h>

typedef struct {
    int score;
    int index;
} Score;

void sortByScore(Score scores[], int size) {
    for (int i = 0; i < size-1; i++) {
        for (int j = 0;  j < size-i-1; j++) {
            if (scores[j].score < scores[j+1].score) {
                Score tmp = scores[j];
                scores[j] = scores[j+1];
                scores[j+1] = tmp;
            }
        }
    }
}

void sortByIndex(Score scores[]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4-i; j++) {
            if (scores[j].index > scores[j+1].index) {
                Score tmp = scores[j];
                scores[j] = scores[j+1];
                scores[j+1] = tmp;
            }
        }
    }
}

int main() {
    Score scores[8];

    for (int i = 0; i < 8; i++) {
        scanf("%d", &scores[i].score);
        scores[i].index = i+1;
    }

    sortByScore(scores,8);

    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += scores[i].score;
    }
    printf("%d\n", sum);

    sortByIndex(scores);
    
    for (int i = 0; i < 5; i++) {
        printf("%d ", scores[i].index);
 //       printf("\n");
    }
    
    
    return 0;
}