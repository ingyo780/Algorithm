#include <stdio.h>

int main(void) {
    int max = 0, num, temp;
    for (int _ = 0; _<9;_++) {
        scanf("%d", &num);
        if (max < num) {
            max = num;
            temp = _;
        } 
    }

    printf("%d\n", max);
    printf("%d\n", temp+1);
    return 0;
}