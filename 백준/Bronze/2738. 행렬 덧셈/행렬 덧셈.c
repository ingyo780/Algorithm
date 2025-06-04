#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int** a = (int**)malloc(n*sizeof(int*));
    for (int i = 0; i < n; i++) {
        a[i] = (int*)malloc(m*sizeof(int));
        for (int j = 0; j < m; j++) {
            scanf("%d ", &a[i][j]);
        }
    }
    int** b = (int**)malloc(n*sizeof(int*));
    for (int i = 0; i < n; i++) {
        b[i] = (int*)malloc(m*sizeof(int));
        for (int j = 0; j < m; j++) {
            scanf("%d ", &b[i][j]);
        }
    }

    int** c = (int**)malloc(n*sizeof(int*));
    for (int i = 0; i < n; i++) {
        c[i] = (int*)malloc(m*sizeof(int));
    }
    for (int i = 0; i< n; i++) {
        for(int j = 0; j < m; j++) {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    free(a);
    free(b);
    free(c);
    return 0;
}