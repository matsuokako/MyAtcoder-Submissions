#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> Vector;
typedef pair<int, int> Pair;

int N, L, R;
int A[109];

int main() {
    //入力
    cin >> N >> L >> R;

    L -= 1;
    R -= 1;
    for (int i = 0; i < N; i++) {
        A[i] = i+1;
    }

    sort(A+L, A+R+1, greater<int>());

    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}

//ソート
//全探索
//二分探索
//動的計画法
//貪欲法
//スタック、キュー、連想配列、集合