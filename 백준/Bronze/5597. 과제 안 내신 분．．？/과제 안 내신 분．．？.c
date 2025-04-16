#include <stdio.h>

int main() {
    int arr[30] = {0};
    
    for (int _ = 0; _ < 28; _++) {
        int index = 0;
        scanf("%d", &index);
        arr[index-1] = 1;
    }

    for (int i = 0; i < 30; i++) {
        if (arr[i] == 0) {
            printf("%d\n", i+1);
        }
    }
}