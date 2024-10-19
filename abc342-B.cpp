#include <iostream>
#include <algorithm>
using namespace std;

int N;
int P[109];
int Q;
int A[109], B[109];
int tmp[109];

int main() {
    //入力
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> P[i]; 
        tmp[P[i]] = i+1;
    }
    cin >> Q;
    for (int i = 0; i < Q; i++) cin >> A[i] >> B[i];

    for (int i = 0; i < Q; i++) {
        if (tmp[A[i]] < tmp[B[i]]) cout << A[i] << endl;
        else cout << B[i] << endl;
    }

    return 0;
}