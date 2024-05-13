#include <iostream>
#include <algorithm>
using namespace std;

int N, K;
int A[109];

int main() {
    //入力
    cin >> N >> K;
    for (int i = 0; i < N; i++) cin >> A[i];

    for (int i = 0; i < N; i++) {
        if (A[i] % K == 0) {
            cout << A[i] / K << " ";
        }
    }
    cout << endl;

    return 0;
}