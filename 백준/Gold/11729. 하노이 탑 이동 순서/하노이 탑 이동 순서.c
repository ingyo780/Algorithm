#include <stdio.h>
#include <math.h>

void move(int from, int to) {
    printf("%d %d\n", from, to);
}

int hanoi(int n, int from, int temp, int to) {
    if (n == 1) move(from,to);
    else {
        hanoi(n-1,from,to,temp);
        move(from,to);
        hanoi(n-1, temp,from,to);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    printf("%d\n", (int)(pow(2,n)-1));
    hanoi(n,1,2,3);

    
    return 0;
}