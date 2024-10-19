#include <iostream>
#include <algorithm>
using namespace std;
//N個以上の卵を買うために最小の金額を求めよ
//S円(6個入り)、M円(8個入り)、L円(12個入り)

int N;
int S, M, L;

int main() {
    //入力
    cin >> N >> S >> M >> L;

    //全探索(1 <= N <= 100より、各個数を100まで調べればよい)
    int Answer = 999999;
    for (int s = 0; s <= 100; s++) {
        for (int m = 0; m <= 100; m++) {
            for (int l = 0; l <= 100; l++) {
                if (6*s + 8*m + 12*l >= N) {
                    Answer = min(S*s + M*m + L*l, Answer);
                }
            }
        }
    }

    //出力
    cout << Answer << endl;
    return 0;
}