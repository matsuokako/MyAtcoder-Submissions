#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string S;

int main() {
    //入力
    cin >> S;
    
    int cnt[30] = {0};//要素26で、アルファベットでi番目の文字がS中に現れる回数

    for (int i = 0; i < S.size(); i++) {
        char c = S[i];
        int j = c - 'a';
        cnt[j]++;
    }

    int cnt2[109];
    for (int i = 0; i < 109; i++) cnt2[i] = 0;
    for (int i = 0; i < 26; i++) {
        if (cnt[i] > 0) {
            cnt2[cnt[i]]++;
        }
    }

    //Sにちょうどi回含まれる文字はちょうど0種類またはちょうど2種類である
    for (int i = 0; i < 109; i++) {
        if (cnt2[i] != 2 && cnt2[i] != 0) {
            cout << "No" << endl;
            return 0;
        }
    }

    //出力
    cout << "Yes" << endl;
    return 0;
}