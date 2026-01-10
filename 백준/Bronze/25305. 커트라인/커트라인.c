#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return *(int*)b - *(int*)a;
}
int main() {
    int n,k;
    scanf("%d %d", &n, &k);
    
    int arr[1000];
    for (int i=0; i<n; i++) {
        scanf("%d", arr+i);
    }
    
    qsort(arr, n, sizeof(int), cmp);

    printf("%d\n", arr[k-1]);
    
    return 0;
}