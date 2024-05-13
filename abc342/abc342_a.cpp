#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string s;

int main() {
    //入力
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        bool diff = true;
        for (int j = 0; j < s.size(); j++) {
            if (i != j and s[i] == s[j]) diff = false;
        }
        if (diff == true) cout << i + 1 << endl;
    }

    return 0;
}