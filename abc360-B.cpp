#include <iostream>
#include <string>
using namespace std;

int main() {
    //入力
    string S, T;
    cin >> S >> T;

    int S_size = S.size();

    for (int w = 1; w < S_size; w++) {
        for (int c = 0; c < w; c++) {
            string now_string = "";
            for (int i = c; i < S_size; i += w) {
                now_string += S[i];
            }
            if (now_string == T) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
    return 0;
}