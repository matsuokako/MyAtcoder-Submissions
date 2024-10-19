#include <iostream>
#include <algorithm>
using namespace std;

int N;
int D[109];

int main() {
    //入力
    cin >> N;
    for (int i = 0; i < N; i++) cin >> D[i];

    //ソート
    sort(D, D+N, greater<int>());

    int count = 1;
    for (int i = 1; i < N; i++) {

        if (D[i-1] != D[i]) {
            count++;
        }
    }

    //出力
    cout << count << endl;
    return 0;
}