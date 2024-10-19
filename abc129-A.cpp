#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main() {
    int P, Q, R;
    /*
    cin >> p >> q >> r;
    int ans = min({ p + q, p + r, q + r });
    cout << ans << endl;
    */
    
    cin >> P >> Q >> R;
	int ans = min({ P + Q, P + R, Q + R });
	cout << ans << endl;
}
