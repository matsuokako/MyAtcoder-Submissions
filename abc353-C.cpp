#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
using ll = long long;
//f(x, y) = (x + y) % 10^8

int N;
int mod = 100000000;

int main() {
    //入力
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    //昇順に並び替えても答えは変わらないので、ソートしておく
    sort(A.begin(), A.end());

    long long count = 0;
    long long result = 0;

    //尺取り法で、条件を満たす整数組の個数を求める
    int right = N;
    for (int i = 0; i < N; i++) {
        right = max(right, i+1); //部分区間がiから始まるよう調整(i ~ right)
        while (right > i+1 && A[i] + A[right-1] >= mod) {
            right--; //条件を満たさない位置まで右端rightをデクリメントしていく
        }
        count += N - right; //(10^8以上の整数組) = (要素数) - (10^8未満の整数組)
    }
    

   /*二分探索を用いる(WA)
   for (int i = 0; i < N; i++) {
        int left = i + 1;
        int right = N - 1;
        int target = mod - A[i];
        while (left <= right) {
            int mid = left + (right + left) / 2;
            if (A[mid] >= target) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        count += N - left; //条件を満たす整数組の更新
   }
   */

    // 1. (N-1)*Σ(i=1 ~ N) A[i]を計算
    // 2. (A[i] + A[j] >= 10^8 の個数) * 10^8 を①から引く。
    for (int i = 0; i < N; i++) {
        result += ll(A[i]) * (N - 1); //①
    }
    result -= count * mod; //②

    cout << result << endl;
 
    return 0;
}