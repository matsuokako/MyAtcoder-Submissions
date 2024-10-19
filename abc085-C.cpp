#include <iostream>
#include <algorithm>
using namespace std;

int N, Y;

int main() {
    //入力
    cin >> N >> Y;

    int num_1000 = -1;
    int num_5000 = -1;
    int num_10000 = -1;

    //全探索
    for (int a = 0; a <= N; a++) {
        for (int b = 0; b <= N; b++) {
            int c = N - a - b;
            if (10000*a + 5000*b + 1000*c == Y && c >= 0) {
                num_1000 = a;
                num_5000 = b;
                num_10000 = c;
                break;
            }
        }
    }

    cout << num_1000 << " " << num_5000 << " "<< num_10000 << endl;
    return 0;
}