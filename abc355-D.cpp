#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//区間 vector<pair<int, int>> を昇順にソートして、 
// 𝑙𝑗 が 𝑙𝑖 より大きい区間のうち、 
// 𝑙𝑗 が 𝑟𝑖 より小さい区間 𝑗 の個数をそれぞれ加算する

int main() {
    int N; //(32bit)
    cin >> N;

    int l, r;
    vector<pair<int, int> > V;
    vector<int> L;
    for (int i = 0; i < N; i++) {
        cin >> l >> r;
        V.emplace_back(l, r); //push_backと処理結果は同じだが、こっちのが高速
        L.push_back(l);
    }

    //ソートする (li <= ljとする)
    sort(V.begin(), V.end());
    sort(L.begin(), L.end());
    long long int sum = 0; //long long = long long int(64bit)
    for (int i = 0; i < N; i++) {
        pair<int, int> p = V[i];
        int l = p.first;
        int r = p.second;
        //upper_bound()で二分探索
        sum += (upper_bound(L.begin(), L.end(), r) - L.begin()) - (i + 1);
        //cout << sum << endl << endl;
    }

    //出力
    cout << sum << endl;
    return 0;
}