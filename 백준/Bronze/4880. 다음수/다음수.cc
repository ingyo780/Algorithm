#include <iostream>
using namespace std;

bool checkEither(int a, int b, int c) {
    if (b-a == c-b) return 0;
    else return 1;
}
int main() {
    while (1) {
        int a,b,c;
        cin >> a >> b >> c;
        if (a==0 && b==0 && c==0) break;

        if (!checkEither(a,b,c)) {
            cout << "AP " << 2*c-b << endl;
        }
        else if (checkEither(a,b,c)) {
            cout << "GP " << c*c/b << endl;
        }
    }
    return 0;
}