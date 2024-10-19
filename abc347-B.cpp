//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <set>
using namespace std;
//部分文字列とは連続する部分列のことを指す
//Sの空でない部分文字列は何種類ありますか？(int)

string S; //英小文字
set<string> Set; //重複を防ぐデータ構造

int main() {
    //入力
    cin >> S;

    for (int i = 0; i < S.size(); i++) {
        for (int j = 1; i+j <= S.size(); j++) {
            //.substr(i, j)はi~jの範囲の部分列を取得する
            Set.insert(S.substr(i, j));
        }
    }

    //出力
    cout << Set.size() << endl;
    return 0;
}