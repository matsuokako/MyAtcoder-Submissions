#include <iostream>
#include <string>
using namespace std;

string s;

int main() {
    //入力
    cin >> s; //0か1の入力

    int count = 0;
    int s_length = s.size();
    for (int i = 0; i <= s_length; i++) {
        if (s[i] == '1') count++;
    }

    //出力
    cout << count << endl;

    return 0;
}