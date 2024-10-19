#include <iostream>
using namespace std;

long long H;

int main() {
    //入力
    cin >> H;

    long long Height = 0;
    for (long long i = 0; i < 10000; i++) {
        Height += 1LL << i; // 2のi乗をビットシフトで計算
        if (Height > H) {
            cout << i + 1 << endl;
            return 0;
        }
    }
}
