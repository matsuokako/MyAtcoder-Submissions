#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> Pair;

int A, B;

int main() {
    //入力
    cin >> A >> B;

    if (A%3 == 0 || B%3 == 0 || (A+B)%3 == 0) {
        cout << "Possible" << endl;
    } else {
        cout << "Impossible" << endl;
    }

    return 0;
}