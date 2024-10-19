//WA
#include <iostream>
#include <string>
using namespace std;

string S, T;
int Answer[200009];

int main() {
    //入力
    cin >> S; //お手本
    cin >> T; //高橋くんがタイピング

    int S_size = S.length();
    int T_size = T.length(); 
    int count = 0;
    int n = 0;

    for (int i = 0; i < S_size; i++) {
        for (int j = n; j < T_size; j++) {
            if (S[i] == T[j]) {
                Answer[count] =  j+1;
                count++;
                n = j+1;
                break;
            }
        }
    }

    for (int i = 0; i < count; i++) {
        if (i == count-1) {
            cout << Answer[i];
        }else {
            cout << Answer[i] << " ";
        }
    }

    return 0;
}