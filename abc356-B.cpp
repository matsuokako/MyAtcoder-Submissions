#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> Vector;
typedef pair<int, int> Pair;

int N, M;
int A[109];
int X[109][109];

int main() {
    //入力
    cin >> N >> M;
    for (int i = 0; i < M; i++) cin >> A[i];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> X[i][j];
        }
    }

    //

}

//ソート
//全探索
//二分探索
//動的計画法
//貪欲法
//スタック、キュー、連想配列、集合