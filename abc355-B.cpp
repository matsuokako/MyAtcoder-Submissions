//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
typedef long long ll;
typedef pair<int, int> Pair;

int N, M;
int A[109];
int B[109];

int main() {
    //入力
    cin >> N >> M;
    for (int i = 0; i < N; i++) cin >> A[i];
    for (int i = 0; i < M; i++) cin >> B[i];

    //Aをソート
    sort(A, A + N);
    //Bをソート
    sort(B, B + M);

    //格納していく
    int Ans[209];
    int a = 0, a_count = 0;
    int b = 0;
    for (int i = 0; i < N + M; i++) {
        Ans[i] += min(A[a], B[b]);
        if (B[b] == 0 || (A[a] < B[b] && (A[a] != 0))) {
            a++;
            a_count += 1;
        } else {
            b++;
            a_count = 0;
        }

        if (a_count == 2) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}