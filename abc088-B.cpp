#include <iostream>
#include <algorithm>
using namespace std;

int N;
int A[109];

int main() {
    //入力
    cin >> N;
    for (int i = 0; i < N; i++) cin >> A[i];

    //配列Aを大きい順にソートする
    sort(A, A+N, greater<int>());

    int Alice_sum = 0;
    int Bob_sum = 0;
    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            Alice_sum += A[i];
        } else if (i % 2 != 0) {
            Bob_sum += A[i];
        }
    }

    int diff = Alice_sum - Bob_sum;

    //cout << Alice_sum << " " << Bob_sum << endl;
    cout << diff << endl;
    return 0;
}