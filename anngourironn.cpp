#include <iostream>
using namespace std;

double probability(double k) {
    double num = 1;
    for (int i = 1; i <= k; i++) {
        num *= (365 - double(i) + 1) / 365;
    }
    return (1 - num);
}

int main() {

    for (int i = 1; i < 100; i++) {
        cout << "k = " << i << "   p(k) = " << probability(i) << endl;
    }

    return 0;
}