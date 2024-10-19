#include <iostream>
#include <algorithm>
using namespace std;

long long N;
long long A[200009];
long long S[200009], T[200009];

int main() {
    //入力
    cin >> N;
    for (int i = 1; i <= N; i++) cin >> A[i];
    for (int i = 1; i <= N-1; i++) cin >> S[i] >> T[i];

    //int money_sum[200009];
    //for (int i = 0; i < N; i++) money_sum[i] = A[i];

    for (int i = 1; i <= N-1; i++) {
        //S[i]を支払い 国i+1の通貨T[i]を獲得
        //操作を行える回数は,A[i] / S[i]回
        A[i+1] += A[i]/S[i] * T[i];
    }

    //出力
    cout << A[N] << endl;

    return 0;
}