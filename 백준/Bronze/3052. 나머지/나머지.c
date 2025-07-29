#include <stdio.h>

int main() {
    int arr[10];
    for (int i = 0; i < 10; i++) {
        scanf("%d\n", &arr[i]);
        arr[i] = arr[i]%42;
    }

    for (int i = 0; i < 10; i++) {
        for (int j = i+1; j < 10; j++) {
            if (arr[i] == arr[j]) arr[j]=-1;
        }
    }

    int cnt=10;
    for (int i = 0; i < 10; i++) {
        if (arr[i] == -1) cnt--;
    }
    printf("%d", cnt);
    return 0;
}