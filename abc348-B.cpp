//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;

//ユークリッド距離
long long  distance(int x1, int y1, int x2, int y2) {
    int Ans = (x1 - x2)*(x1 - x2) + (y1 - y2) * (y1 - y2);
    //sqrt()つけなくても答えは変わらない。
    return Ans;
}

long long N;
long long x[109], y[109];

int main() {
    //入力
    cin >> N;
    for (int i = 0; i < N; i++) cin >> x[i] >> y[i];

    for (int i = 0; i < N; i++) {
        int max_dist = 0;
        int ans = -1;
        for (int j = 0; j < N; j++) {
            int dist = distance(x[i],y[i],x[j],y[j]);
            if (max_dist < dist) {
                max_dist = dist;
                ans = j;
            }
        }
        cout << ans+1 << endl;
    }

    return 0;
}