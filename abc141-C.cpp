#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> Pair;
typedef vector<int> Vector;

int main() {
    int N, K, Q;
    cin >> N >> K >> Q;
    int A[100009];
    for (int i = 0; i < Q; i++) cin >> A[i];

    //はじめは全員(N人)それぞれK点持っている。
    //誰かが正解すると他の人は-1
    //正解した人はポイントはそのターン減らない
    // K - (Q-X) > 0を満たせば勝ち抜けたと言える
    vector<int> X(N);
    for (int i = 0; i < N; i++) X[i] = 0;
    for (int i = 0; i < Q; i++) X[A[i]-1] += 1;
    for (int i = 0; i < N; i++) {
        if (K - (Q - X[i]) > 0) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}