#include <iostream>
#include <algorithm>
using namespace std;

int N;
int A[109][109];

int main() {
    //入力
    cin >> N;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) cin >> A[i][j]; cout << " ";
        cout << endl;
    }

    //出力
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (A[i][j] == 1) cout << j << " ";
        }
        cout << endl;
    }
}