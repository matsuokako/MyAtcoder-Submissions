#include <iostream>
#include <algorithm>
using namespace std;

int N;
int D[109];

int main() {
    //入力
    cin >> N;
    //c++では配列の要素は0から始まることに注意
    for (int i = 0; i < N; i++) cin >> D[i];

    int count = 1;
    //ソートする
    sort(D, D+N, greater<int>());
    for (int i = 0; i < N; i++) {
        if (i >= 1 && D[i] != D[i-1]) {
            count++;
        }
    }

    //出力
    cout << count << endl;

    return 0;
}