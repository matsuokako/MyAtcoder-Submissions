#include <iostream>
using namespace std;
//N個の駅がある。1,2,3,4,...N
//上り列車。1, 2, 3, ..., N
//下り列車。N, N-1, N-2, ...,1
//上り列車または下り列車で、XからY駅に移動したい。
//この移動の間に駅Zに移動するか？

int N, X, Y, Z;

int main() {
    //入力
    cin >> N >> X >> Y >> Z;
    if (X <= Y) {
        if (X <= Z && Z <= Y) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    } else {
        if (Y <= Z && Z <= X) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}