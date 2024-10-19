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
    for (int i = 1; i <= N; i++) { //0はi-1でアクセスするから書かない
        int time_diff = t[i] - t[i-1]; //時刻の差
        int distance_diff = abs((x[i] - x[i-1]) + (y[i] - y[i-1])); //移動距離の差
        //条件分岐
        //移動距離より時刻の差が小さくなることはあり得ないことに注意
        // (例) 1秒間で距離2移動する。4秒間で距離5移動する。など
        if (time_diff < distance_diff) {
            can = false;
            break;
        }
        //時刻の差と移動距離の差の偶奇は一致することに注意
        // (例) 0秒間で0移動、2秒間で2移動、5秒間で5移動、5秒間で3移動、5秒間で1移動など。
        if (time_diff % 2 != distance_diff % 2) {
            //(time_diff % 2 == 0 && distance_diff % 2 == 0)
            // || (time_diff % 2 != 0 && distance_diff % 2 != 0)
            can = false;
            break;
        }
    }

    //出力
    if (can) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}