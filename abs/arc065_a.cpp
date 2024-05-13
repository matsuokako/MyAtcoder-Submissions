#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
//後ろから分解していく

string S;
string T[4] = {"dream", "dreamer", "erase", "eraser"};

int main() {
    //入力
    cin >> S;

    //全ての文字列を反転する
    reverse(S.begin(), S.end());
    for (int i = 0; i < 4; i++) reverse(T[i].begin(), T[i].end());

    bool can = true;
    for (int i = 0; i < S.size();) {
        bool can2 = false;
        for (int j = 0; j < 4; j++) {
            string d = T[j];
            if (S.substr(i, d.size()) == d) {
                can2 = true;
                i += d.size();
            }
        }
        if (!can2) {
            can = false;
            break;
        }
    }

    if (can) cout << "YES" << endl;
        else cout << "NO" << endl;
        
        return 0;
}