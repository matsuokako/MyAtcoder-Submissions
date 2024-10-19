#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int W, B;
const string T = "wbwbwwbwbwbw";

int main() {
    //入力
    cin >> W >> B;

    for (int i = 0; i < T.size(); i++) {
        int num_w = 0;
        int num_b = 0;
        int WB_sum = W + B;
        for (int j = 0; j < WB_sum; j++) {
            if (T[(i + j) % T.size()] == 'w') { 
                // % T.size()によって最後の要素を超えると最初に戻るようにする
                num_w++;
            } else {
                num_b++;
            }
            if (W == num_w && B == num_b) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}