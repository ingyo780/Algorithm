#include <stdio.h>


int main() {
    int n,m;
    scanf("%d %d", &n, &m);
    int arr[101];
    for (int i = 1;i<=n;i++) {
        arr[i] = i;
    }
    while (m != 0) {
        int i, j;
        scanf("%d %d", &i, &j);
        int tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
        m--;
    }

    for (int i = 1; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}