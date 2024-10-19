#include <iostream>
#include <algorithm>
using namespace std;

int N;
int A[109];

int main() {
    //入力
    cin >> N;
    for (int i = 0; i < N-1; i++) cin >> A[i];

    //N人の持ち点の合計は必ず0になる
    //よって、A[1]+A[2]+A[3]+...+A[N-1]+A[N] = 0
    //A[N] = -(A[1]+A[2]+A[3]+...+A[N-1])と式変形できる
    int sum = 0;
    for (int i = 0; i < N-1; i++) {
        sum += A[i];
    }

    cout << -sum << endl;
    return 0;
}