#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

long long N;
string S[109];
long long C[109];

int main() {
    //入力
    cin >> N;
    for (int i = 0; i < N; i++) cin >> S[i] >> C[i];

    //レートの総和
    int sum_rate = 0;
    for (int i = 0; i < N; i++) {
        sum_rate += C[i];
    }
    //辞書順にソート
    string tmp;
    for (int i = 0; i < N-1; i++) {
        for (int j = 0; j < N-1; j++) {
            if (S[j] > S[j+1]) {
                tmp = S[j];
                S[j] = S[j+1];
                S[j+1] = tmp;
            }
        }
    }

    //出力
    int index = sum_rate % N;
    cout << S[index] << endl;
    return 0;
}