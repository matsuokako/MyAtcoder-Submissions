#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string s;

int main() {
    //入力
    cin >> s;

    int count = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != '|' && count == 0 || count >= 2) {
            cout << s[i];
        }
        if (s[i] == '|') count++;
    }
    cout << endl;

    return 0;

}