#include <bits/stdc++.h>
using namespace std;

int main() {
    double I[10], V[10];
    const int R = 47;
    for (int i = 0; i < 9; i++) {
        cin >> V[i];
    }

    for (int i = 0; i < 9; i++) {
        I[i] = V[i] / R;
        cout << "I: " << I[i] * 1000 << "(mA)   V: " << V[i] << "   R: " << R << endl;
    }

    return 0;
}