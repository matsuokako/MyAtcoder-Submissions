//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
typedef long long ll;
typedef pair<int, int> Pair;

int A, B;

int main() {
    //入力
    cin >> A >> B;
    
    if ((A == 1 && B == 2) || (A == 2 && B == 1)) cout << "3" << endl;
    else if ((A == 1 && B == 3) || (A == 3 && B == 1)) cout << "2" << endl;
    else if ((A == 2 && B == 3) || (A == 3 && B == 2)) cout << "1" << endl;
    else cout << "-1" << endl;

}

//ソート
//全探索
//二分探索
//動的計画法
//貪欲法
//スタック、キュー、連想配列、集合