#include <stdio.h>


int main() {
    int n,m;
    scanf("%d %d", &n, &m);
    int arr[101]={0};
    while (m != 0) {
        int s,e,c;
        scanf("%d %d %d", &s, &e, &c);
        for (s;s<=e;s++) {
            arr[s]=c;
        }
        m--;
    }
    for (int i = 1; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}