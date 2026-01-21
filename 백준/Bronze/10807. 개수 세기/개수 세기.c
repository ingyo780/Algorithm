#include <stdio.h>
#include <stdlib.h>
// (int*)malloc(n * sizeof(int));

int main() {
    int n;
    scanf("%d", &n);
    int* arr = (int*)malloc(n*sizeof(int));

    for (int i=0; i<n; i++) {
        scanf("%d", arr+i);
    }

    int v;
    scanf("%d", &v);

    int cnt=0,i=0;
    while (i<n) {
        if (v==arr[i++]) cnt++;
    }

    printf("%d", cnt);
}