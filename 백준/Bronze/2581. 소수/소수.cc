#include <iostream>
using namespace std;

void isPrime(bool* arr, int m, int n) {
    for (int i=m; i<=n; i++) {
        if (!arr[i]) continue; 
        for (int j=2; j<i; j++) {
            if (i%j==0) {
                arr[i] = false;
                break;
            }
        }
    }
}

int main() {
    bool arr[10000];
    int m,n;
    cin >> m >> n;
    for (int i=m; i<=n; i++) {
        arr[i] = true;
    }
    arr[0]=arr[1]=false;
    isPrime(arr, m,n);

    int sum=0,cnt=0,min;
    for (int i=m; i<=n; i++) {
        if (arr[i]) {
            if (cnt==0) min = i;
            sum += i;
            cnt++;
        } 
    }
    if (cnt==0) cout << "-1" << endl;
    else {
        cout << sum << endl;
        cout << min << endl;
    }
}