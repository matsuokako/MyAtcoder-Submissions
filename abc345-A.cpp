#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string s;

int main() {
    //入力
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        if (i == 0) {
            if (s[i] == '<') continue;
            else {
                cout << "No" << endl;
                return 0;
            }
        }
        if (i == s.size()-1) {
            if (s[i] == '>') continue;
            else {
                cout << "No" << endl;
                return 0;
            }
        }
        if (1 <= i && i < s.size()-1) {
            if (s[i] == '=') continue;
            if (s[i] != '=') {
                cout << "No" << endl;
                return 0;
            }
        }
    }

    cout << "Yes" << endl;
    return 0;
}