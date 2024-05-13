#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int N;
char A[109][109], B[109][109];

int main() {
    //入力
    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) cin >> A[i][j];
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) cin >> B[i][j];
    }

    bool diff = false;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (A[i][j] != B[i][j]) {
                diff = true;
                cout << i+1 << " " << j+1 << endl;
                return 0;
                //break;
            }
        }
    }

    return 0;
}