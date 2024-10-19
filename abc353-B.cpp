#include <iostream>
#include <algorithm>
using namespace std;
//K人乗りのアトラクション、Nグループが待機中
//i番目のグループはA[i]人である(A[i] <= K)
//はじめ、空席はK個ある。
// 1.並んでいるグループがいない場合、誘導を終了
// 2.アトラクションの空席の数とグループの人数を比較し、次の処理を行う
//   * 空席の数 < A[i]の場合、アトラクションをスタートさせる。その後空席はK個になる
//   * 空席の数 >= A[i]の場合、先頭のグループA[i]を空席に誘導
// 3. 繰り返し
//高橋君が誘導を開始してから誘導を終了するまで、何回アトラクションをスタートさせるか求めよ


int N, K;
int A[109];
int vacant_seat;

int main() {
    //入力
    cin >> N >> K;
    for (int i = 0; i < N; i++) cin >> A[i];

    int count = 0;
    vacant_seat = K;
    for (int i = 0; i < N; i++) {
        if (vacant_seat < A[i]) {
            count++;
            vacant_seat = K;
            i--;
        } else {
            vacant_seat = vacant_seat - A[i];
        }
    }

    cout << count+1 << endl;
    return 0;
}