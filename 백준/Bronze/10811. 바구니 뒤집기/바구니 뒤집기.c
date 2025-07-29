#include <stdio.h>

void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        end--;
        start++;
    }
}

int main() {
    int n,m;
    scanf("%d %d", &n, &m);
    int arr[100];
    for (int i = 0; i < n; i++) {
        arr[i] = i+1;
    }
    
    while (m > 0) {
        int start,end;
        scanf("%d %d", &start, &end);
        reverse(arr, start-1, end-1);
        m--;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}