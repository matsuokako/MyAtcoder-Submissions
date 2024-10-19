#include <iostream>
#include <algorithm>
using namespace std;

int N;
int A[109];
int B[109];

int main() {
    //入力
    cin >> N;
    for (int i = 0; i < N; i++) cin >> A[i];

    for (int i = 0; i < N-1; i++) {
        B[i] = A[i] * A[i+1];
    }

    for (int i = 0; i < N-1; i++) {
        cout << B[i] << " ";
    }
    cout << endl;

    return 0;
}