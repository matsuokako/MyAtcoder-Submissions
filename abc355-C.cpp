#include <iostream>
#include <vector>
using namespace std;

int main() {
    //入力
    int N, T;
    cin >> N >> T;
    vector<int> A(T);
    for (int i = 0; i < T; i++) cin >> A[i];

    vector<int> row(N), column(N);
    int diag1 = 0;
    int diag2 = 0;
    int Ans = -1;
    for (int i = 0; i < T; i++) {
        //行、列ごとに出現回数をカウントしていく
        int Row = (A[i] - 1) / N; //行
        int Column = (A[i] - 1) % N; //列
        row[Row]++;
        column[Column]++;
        //斜め(\ と / のそれぞれのパターン)の出現回数をカウントしていく
        if (Row == Column) { // 例: (0,0) (1,1) (2,2)
            diag1++;
        }
        if (Row + Column == N -1) { // 例: (2,0)==3-1 (0,2)==3-1 (1,1)==3-1
            //cout << Row << " " << Column << " " << N << endl;
            diag2++;
        }
        //行、列、斜め(2パターン)のいずれかの出現回数がNと等しくなったら、ビンゴ！
        if (row[Row] == N || column[Column] == N || diag1 == N || diag2 == N) {
            Ans = i + 1; //ビンゴになったのが何回目か記録
            break;
        }
    }

    //出力
    cout << Ans << endl;
    return 0;
}