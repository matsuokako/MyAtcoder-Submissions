#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;

    string ans;

    for (int i = 0; i < S.length(); i++) {
        if (S[i] != '.') {
            ans.push_back(S[i]);
        }
    }

    cout << ans << endl;

    return 0;
}