#include <iostream>
using namespace std;

int A, B, C;
int X;

int main() {
    //入力
    cin >> A >> B >> C;
    cin >> X;

    int count = 0;
    for (int a = 0; a <= A; a++) {
        for (int b = 0; b <= B; b++) {
            for (int c = 0; c <= C; c++) {
                int amount = 500*a + 100*b + 50*c;
                if (X == amount) count++;
            }
        }
    }

    //出力
    cout << count << endl;
    return 0;
}