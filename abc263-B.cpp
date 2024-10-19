#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        a[i]--;
    }

    vector<int> dp(n);
    for (int i = 1; i < n; i++) {
        dp[i] = dp[a[i]] + 1;
    }

    cout << dp[n - 1] << endl;
}