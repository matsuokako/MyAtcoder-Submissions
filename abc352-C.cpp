#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long N, A[200009], B[200009];

int main() {
    //入力
    cin >> N;
    for (int i = 1; i <= N; i++) cin >> A[i] >> B[i];

    //全員の肩までの高さ+肩から頭までの高さの最大を求める
    long long shoulder_sum = 0;
    for (int i = 1; i <= N; i++) {
        shoulder_sum += A[i];
    }
    //肩から頭までの高さの最大
    long long head_height = 0;
    for (int i = 1; i <= N; i++) {
        head_height = max(head_height, B[i]-A[i]);
    }

    long long Answer = shoulder_sum + head_height;

    cout << Answer << endl;

    return 0;
}