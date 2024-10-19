#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main() {
    // 入力
    int N;
    cin >> N;
    vector<int> A(N), W(N);
    vector<int> max_weight(N, 0); // 0で初期化
    for (int i = 0; i < N; i++) cin >> A[i]; // 箱A[i]の中に重さW[i]の荷物がある
    for (int i = 0; i < N; i++) cin >> W[i]; // 

    // 全ての箱に荷物が1つずつ入っている状態にするための、コストの総和の最小値を求めよ。

    // 各箱の最大コストを求める
    for (int i = 0; i < N; i++) {
        A[i]--; //配列のインデックスに合わせるため、1引く
        max_weight[A[i]] = max(max_weight[A[i]], W[i]);
    }

    // 重量の合計を計算する
    const int sum_weight = accumulate(W.begin(), W.end(), 0);
    // 最大重量の合計を計算する
    const int sum_max = accumulate(max_weight.begin(), max_weight.end(), 0);

    // 出力
    // 今回は、コストを求めるだけであるので、各箱の最大重量の荷物は動かさず、それ以外の荷物を移動させれば良い。
    // よって、以下のような計算式となる。
    cout << sum_weight - sum_max << endl;

    return 0;
}