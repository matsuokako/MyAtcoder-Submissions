#include <iostream>
using namespace std;

#define good "Good"
#define bad "Bad"
string solve() {
    rep(i, 0, 3) if(S[i] == S[i + 1]) return bad;
    return good;
}

int main() {
    cin >> S;
    cout << solve() << endl;
}