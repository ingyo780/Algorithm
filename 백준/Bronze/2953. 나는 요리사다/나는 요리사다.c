#include <stdio.h>
#include <stdlib.h>

int main() {
    int** arr = (int**) malloc(5 * sizeof(int*));
    int* sum = (int*)malloc(5*sizeof(int));

    for (int i = 0; i < 5; i++) {
        arr[i] = (int*)malloc(4 * sizeof(int));
        sum[i] = 0;
        for (int j = 0; j < 4; j++) {
            scanf("%d ", &arr[i][j]);
            sum[i] += arr[i][j];
        }
    }

    int m = sum[0], m_i;
    for (int i = 0; i < 5; i++) {
        if (m < sum[i]) {
            m = sum[i];
            m_i = i;
        }
    }

    printf("%d ", m_i+1);
    printf("%d", m);
    
    return 0;
}