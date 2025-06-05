#include <stdio.h>
#define swap(x,y) {Struct z=x;x=y;y=z;}

typedef struct {
    int nara;
    int num;
    int score;
} Struct;

void selectionSort(Struct arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i].score < arr[j].score) swap(arr[i], arr[j]);
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    Struct group[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &group[i].nara, &group[i].num, &group[i].score);
    }

    selectionSort(group, n);

    int arr[50] = {0};
    for (int i = 0; i < 3; i++) {
        if (arr[group[i].nara] != 2){
            printf("%d %d\n", group[i].nara, group[i].num);
            arr[group[i].nara] += 1;
        }
        else {
            int index = i+1;
            while (group[index].nara == group[i].nara) {
                index++;
            }
            printf("%d %d", group[index].nara, group[index].num);
        }
    }
    return 0;
}