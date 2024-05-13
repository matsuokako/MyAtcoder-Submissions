#include <iostream>
#include <algorithm>
using namespace std;

int N;

int main() {
    //入力
    cin >> N;

    for (int i = 0; i < (2*N)+1; i++) {
        if (i % 2 == 0) cout << '1';
        else cout << '0';
    }

    cout << endl;

    return 0;
}