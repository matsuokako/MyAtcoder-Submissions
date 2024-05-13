#include <iostream>
#include <algorithm>
using namespace std;
//送料はS円以上なら０円、S円未満ならK円である
//商品i(P[i]円)をQ[i]個購入する

int N, S, K;
int P[109], Q[109];

int main() {
    //入力
    cin >> N >> S >> K;
    for (int i = 0; i < N; i++) cin >> P[i] >> Q[i];

    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += P[i] * Q[i];
    }
    
    if (sum >= S) {
        cout << sum << endl;
        return 0;
    } else {
        sum += K;
        cout << sum << endl;
        return 0;
    }
    
}