//WA
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//N人の巨人がいる
//肩の高さがA[i], 頭の高さがB[i]である
//P1の巨人は、肩がA[p1], 頭がB[p1]
//p2の巨人は、P1の巨人の肩の高さをtとしたとき、
//肩の高さがt + A[p2], 頭の高さがt + B[p2]とする
//...
//一般に、巨人Piの肩の高さA[Pi] = tとしたとき、
//巨人Pi+1の肩の高さは、t + A[Pi+1], 頭の高さは t + B[Pi+1]である。

//  一番上に立っている巨人Pnの頭の高さが最大となる頭の高さを求めてください。

int N, A[200009], B[200009];
int P[200009];
vector<pair<int, int>> tmp; //巨人の肩の高さをソートするための一時変数

int main() {
    //入力
    cin >> N;
    for (int i = 1; i <= N; i++) {
        P[i] = i;
        cin >> A[P[i]] >> B[P[i]];
        tmp.push_back(make_pair(A[P[i]], B[P[i]]));
    }

    //肩の高さが高い順にソートする
    sort(tmp.begin(), tmp.end(), greater<int>()); 
    for (int i = 1; i <= N; i++) {
        A[i]= tmp[i-1].first;
        B[i] = tmp[i-1].second;
    }

    //巨人の肩の高さが大きいものから貪欲に取っていく(CurrentHeightは現在の肩の高さ)
    //配列P[]に格納していく
    int CurrentHeight = 0, Answer = 0;
    for (int i = 1; i <= N; i++) {
        if (i == 1) {
            P[i] = A[i];
        } else {
            //P[i+1] = ; //
            Answer = B[i]; //頭の高さ
        }
    }

    cout << Answer << endl;

    return 0;
}