#include <iostream>
#include <string>
using namespace std;

int main() {
    //入力
    string S;
    cin >> S;

    int rice = 0;
    int miso_soup = 0;
    int salad = 0;
    for (int i = 0; i < 3; i++) {
        if (S[i] == 'R') rice = i+1;
        if (S[i] == 'M') miso_soup = i+1;
    }

    if (rice < miso_soup) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;

}