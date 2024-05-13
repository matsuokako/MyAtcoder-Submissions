#include <iostream>
using namespace std;

int a, b;

int main() {
    //入力
    cin >> a >> b;

    int sum = a * b;

    if (sum % 2 == 0) {
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;
    }

    return 0;
}
