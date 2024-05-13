#include <iostream>
#include <algorithm>
using namespace std;

int N;
int t[100009], x[100009], y[100009];

int main() {
    //入力
    cin >> N;
    t[0] = 0; x[0] = 0; y[0] = 0;
    for (int i = 1; i <= N; i++) cin >> t[i] >> x[i] >> y[i];

    bool can = true;
    for (int i = 0; i < N; i++) {
        int time_diff = t[i+1] - t[i];
        int distance =  abs(x[i+1] - x[i]) + abs(y[i+1] - y[i]);
        //経過時間より移動距離が大きいのはあり得ない
        if (time_diff < distance) can = false;
        //経過時間と移動距離の偶奇は必ず一致する
        if (time_diff % 2 != distance % 2) can = false;
    }

    //出力
    if (can) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;


}