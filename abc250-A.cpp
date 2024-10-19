#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;

    int R, C;
    cin >> R >> C;

    int x = 0;
    cin >> x;

    if (C!=1){x++;}
    if (C!=W){x++;}
    if (R!=1){x++;}
    if (R!=H){x++;}

    cout << x << endl;
    return 0;
}

