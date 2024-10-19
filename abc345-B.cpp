//WA
#include <iostream>
#include <algorithm>
using namespace std;

int x;

int main() {
    //入力
    cin >> x;

    double ans;
    if (x >= 0) {
        if (x % 10 != 0) ans = (x/10)+1;
        else ans = x/10;
    } else {
        ans = (x/10);
    }

    //出力
    cout << int(ans) << endl;
    return 0;
}