#include <iostream>
using namespace std;

int N;
int A, B;

int main() {
    //入力
    cin >> N >> A >> B;

    int Answer = 0;
    for (int i = 1; i <= N; i++) {
        int digits_1 = i % 10;
        int digits_10 = (i / 10) % 10;
        int digits_100 = (i / 100) % 10;
        int digits_1000 = (i / 1000) % 10;
        int digits_10000 = (i / 10000) % 10;
        int sum = digits_1 + digits_10 + digits_100 + digits_1000 + digits_10000;
        if (A <= sum && sum <= B) Answer += i;
    }

    cout << Answer << endl;

    return 0;
}