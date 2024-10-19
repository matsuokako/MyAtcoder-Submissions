#include <iostream>
#include <algorithm>
using namespace std;

int A[19], B[19];

int main() {
    //入力
    for (int i = 0; i < 9; i++) cin >> A[i];
    for (int i = 0; i < 8; i++) cin >> B[i];

    int t_team = 0;
    for (int i = 0; i < 9; i++) t_team += A[i];
    int a_team = 0;
    for (int i = 0; i < 8; i++) a_team += B[i];

    int diff = t_team - a_team;
    int Answer = diff + 1;

    //cout << t_team << " " << a_team << endl;
    cout << Answer << endl;

    return 0;
}