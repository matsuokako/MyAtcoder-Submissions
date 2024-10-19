#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N;
    cin >> N;
    vector<long long> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    //累積和を計算しておく
    // left[i] = A[0] ~ A[i]までの最大値
    // right[i] = A[i] ~ A[N-1]までの最大値
    // i番目以外の最大値はmax(left[i-1], right[i+1])である
    vector<long long> left(N), right(N);
    //左側
    for (int i = 0; i < N; i++) left[i] = A[i];
    for (int i = 1; i < N; i++) left[i] = max(left[i-1], left[i]);
    //右側
    for (int i = 0; i < N; i++) right[i] = A[i];
    for (int i = N-2; i >= 0; i--) right[i] = max(right[i+1], right[i]);

    for (int i = 0; i < N; i++) {
        long long Ans = -1;
        if (0 < i) Ans = max(Ans, left[i-1]);
        if (i < N-1) Ans = max(Ans, right[i+1]);
        cout << Ans << endl;
    }

    return 0;
}