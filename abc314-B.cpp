#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, X;
    int C[109];
    vector<int> A[109];

    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> C[i];
        A[i].resize(C[i]); //??
        for (int j = 0; j < C[i]; j++) cin >> A[i][j];
    }
    cin >> X;

    vector<int> vec;
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < C[i]; j++) {
            if (A[i][j] == X) vec.push_back(i);
        }
    }

    int cmin = 37;
    //for 
}