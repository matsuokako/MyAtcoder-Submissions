#include <iostream>
#include <algorithm>
using namespace std;

string s;

int main() {
    //入力
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        if (i == s.size() - 1) {
            s[i] = '4';
        }
    }

    cout << s << endl;
    return 0;
}