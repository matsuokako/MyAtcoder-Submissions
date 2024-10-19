#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;

    int N = S.length();

    if (S[N-3] == 's' && S[N-2] == 'a' && S[N-1] == 'n') {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}