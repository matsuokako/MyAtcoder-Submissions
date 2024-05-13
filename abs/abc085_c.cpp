#include <iostream>
#include <algorithm>
using namespace std;
//N枚のお札で、合計金額がY円はありえるか？
//ありえない場合は、-1, -1, -1と出力する

int N, Y;

int main() {
    //入力
    cin >> N >> Y;

    for (int x = 0; x <= N; x++) {
        for (int y = 0; y <= N; y++) {
            //N = x + y + z
            int z = N - x - y;
            if (z < 0) break;
            int sum = 10000*x + 5000*y + 1000*z;
            if (sum == Y) {
                cout << x << " " << y << " " << z;
                return 0;
            }
        }
    }

    //候補が見つからなかった場合
    cout << "-1" << " -1" << " -1" << endl;
}