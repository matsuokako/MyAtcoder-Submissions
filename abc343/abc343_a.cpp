#include <iostream>
#include <algorithm>
using namespace std;

int A, B;

int main() {
    //入力
    cin >> A >> B;

    int ans = A + B;

    if (ans == 1) {
        cout << 2 << endl;
    } else {
        cout << 1 << endl;
    }
}