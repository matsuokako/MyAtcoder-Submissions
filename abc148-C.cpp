#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

//最大公約数
ll gcd(ll a, ll b) {
    if (a % b == 0) {
        return b;
    } else {
        return gcd(b, a%b);
    }
}

//最小公倍数
ll lcm(ll a, ll b) {
    return a*b / gcd(a, b);
}


ll A, B;

int main() {
    //入力
    cin >> A >> B;
    
    ll ans = lcm(A, B);

    cout << ans << endl;
    return 0;
}