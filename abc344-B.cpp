#include <iostream>
#include <algorithm>
using namespace std;

int N;
int A[109];

int main() {
    int count = 0;
    //入力(Nは入力で与えられない)
    for (int i = 0; i < 109; i++) {
        cin >> A[i];
        count++;
        if (A[i] == 0) break;
    }

    //出力
    for (int i = count-1; i >= 0; i--) {
        cout << A[i] << endl;
    }
    return 0;
}