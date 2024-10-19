#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y, n;
    cin >> x >> y >> n;
    y = min(y, x*3);
    int ans = n/3*y + n%3*x;
    cout << ans << endl;
    return 0;
}