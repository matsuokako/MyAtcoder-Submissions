#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string s;
string T[4] = {"dream", "dreamer", "erase", "eraser"};

int main() {
    //入力
    cin >> s;

    //全て逆順にする
    reverse(s.begin(), s.end());
    for (int i = 0; i < 4; i++) reverse(T[i].begin(), T[i].end());
    

    bool can = true;
    for (int i = 0; i < s.size(); /*ここは書かない*/) {
        bool can2 = false;
        for (int j = 0; j < 4; j++) {
            if (s.substr(i, T[j].size()) == T[j]) {
                //文字列.substr(開始位置, 取り出す長さ)
                can2 = true;
                i += T[j].size(); //ここでiをインクリメント
            }
        }
        if (!can2) {
            can = false;
            break;
        }
    }

    //出力
    if (can) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}