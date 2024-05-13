#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string s;

int main() {
    //入力
    cin >> s;

    int ldot = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '.') ldot = i;
    }

    for (int i = ldot+1; i < s.size(); i++) {
        cout << s[i];
    }

    cout << endl;

    return 0;
}