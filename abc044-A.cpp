#include <bits/stdc++.h>
using namespace std;

int main() {
    //入力
    int N, K, X, Y;
    cin >> N >> K >> X >> Y;

    int sum = 0;
    for (int i = 0; i < N; i++) {
        if (i < K) {
            sum += X;
        } else {
            sum += Y;
        }
    }

    //出力
    cout << sum << endl;
    return 0;
}