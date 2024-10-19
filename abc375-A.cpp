#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    string S;
    cin >> N;
    cin >> S;

    int count = 0;

    for (int i = 0; i < N-2; i++) {
        if (S[i] == '#' && S[i+1] == '.' && S[i+2] == '#') {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}

