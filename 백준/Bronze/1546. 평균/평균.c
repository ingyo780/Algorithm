#include <stdio.h>

int main() {
    int n;
    int arr[1000];
    scanf("%d\n", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d ", arr+i);
    }

    int max=arr[0];
    for (int i = 1; i < n; i++) {
        if (max < arr[i]) max = arr[i];
    }

    double sum=0;
    for (int i = 0; i < n; i++) {
        sum += (double)arr[i] / max * 100;
    }

    printf("%.2f", sum/n);
    return 0;
}