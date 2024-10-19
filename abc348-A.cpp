#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
//N回のPKをして、3の倍数の時は失敗する
//成功は'o', 失敗は'x'を出力

int N;

int main() {
    //入力
    cin >> N;

    for (int i = 1; i <= N; i++) {
        if (i % 3 == 0) {
            cout << 'x';
        } else {
            cout << 'o';
        }
    }

    cout << endl;
    
    return 0;
}