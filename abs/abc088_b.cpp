#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;
int A[109];

int main() {
    //入力
    cin >> N;
    for (int i = 0; i < N; i++) cin >> A[i];

    //アリスが先にカードをとる
    //配列A[i]を、大きい順にソートする必要がある
    sort(A, A+N, greater<int>());
    int Alice_num = 0;
    int Bob_num = 0;
    //c++では、配列の要素は0から始まることに注意
    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            Alice_num += A[i];
        } else  {
            Bob_num += A[i];
        }
    }

    cout << Alice_num - Bob_num << endl;

    return 0;
}