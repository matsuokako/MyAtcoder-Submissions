#include <iostream>
using namespace std;

int N;
int A[209];

int main() {
    //入力
    cin >> N;
    for (int i = 1; i <= N; i++) cin >> A[i];

    int count = 0;
    bool Bool = true;
    //c++の配列の要素数は0から始まることに注意
    while (Bool == true)
    {
        for (int i = 0; i < N; i++) {
            if (A[i] % 2 != 0) {
                Bool = false;
                break;
            }
        }
        count++;
        for (int i = 0; i < N; i++) A[i] = A[i] / 2;
    }
    count--;

    //出力
    cout << count << endl;
    
    return 0;
}