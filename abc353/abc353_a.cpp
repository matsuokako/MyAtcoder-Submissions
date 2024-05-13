#include <iostream>
#include <algorithm>
using namespace std;

int N;
int H[109];

int main() {
    //入力
    cin >> N;
    for (int i = 0; i < N; i++) cin >> H[i];

    int ans = -1;
    int max = H[0];

    for (int i = 1; i < N; i++) {
        if (max < H[i]) {
            ans = i+1;
            max = H[i];
            break;
        }
    }

    cout << ans << endl;

    return 0;
}