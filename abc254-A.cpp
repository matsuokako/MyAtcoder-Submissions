#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if(100 <= n && n <= 999) {
        cout << (n%100)/10 << n%10 << endl;
    }
    return 0;
}