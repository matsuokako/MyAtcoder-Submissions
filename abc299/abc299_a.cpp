#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int n;
string s;

int main() {
    //入力
    cin >> n;
    cin >> s;

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '|') count++;
        if (1 <= count && count < 2) {
            if (s[i] == '*') {
                cout << "in" << endl;
                return 0;
            }
        }
    }

    cout << "out" << endl;
    return 0;
}