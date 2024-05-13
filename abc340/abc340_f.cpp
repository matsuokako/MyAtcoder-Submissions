//拡張ユークリッドの互助法
// 1. ax + by = gcd(a, b)を満たす(x, y)を求めるアルゴリズム
// 2. ax + by = cを満たす(x, y)を求めるアルゴリズム
#include <iostream>
#include <algorithm>
using namespace std;
//以下に条件を示す
//-10^18 <= A,B <= 10^18
//xy平面上の点(0,0), (X,Y), (A,B)を頂点とする三角形の面積は1

//まず、重要な事実として、
//上記の条件を満たす三角形の面積は、abs(AY - BX)/2 = 1である。
//したがって、X,Yの組が与えられた時に、abs(AY - BX) = 2を満たす整数の組(A,B)を
//求める問題といえる。
//最大公約数g = gcd(X,Y)とする。
//g = 1,2の場合は拡張ユークリッドの互助法を利用することで常に解を得ることができる。
//g >= 3ならば、AY - BX も gの倍数となるため、解は存在しない。

//拡張ユークリッドの互除法とは、整数の組 (a,b) を入力として与えたときに以下の手順によって
//ax+by=±gcd(a,b) となる整数の組 (x,y) を 
//O(log min(∣a∣,∣b∣)) で計算するアルゴリズムです。

//ユークリッドの互助法(最大公約数を求める)
long long gcd(long long a, long long b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

//拡張ユークリッドの互助法
//返り値はaとbの最大公約数dとする
long long extGCD(long long a, long long b, long long &x, long long &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }

    long long d = extGCD(b, a%b, y, x);
    y -= a/b * x;
    return d;
}

long long x, y;

int main() {
    //入力
    cin >> x >> y;

    long long a, b;
    //long long g = gcd(x, y);
    long long g = extGCD(x, -y, b, a); //xと-yの最大公約数￥

    if (2 % g != 0) { // (g = 1 or g = 2) のとき解は存在しない。
        cout << -1 << endl;
        return 0;
    }

    //出力
    //AY - BX = abs(2)を満たす(A,B)の組を求める
    //(c,d)を2/g倍することで得られる
    cout << a * 2/g << " " << b * 2/g << endl;

    return 0;
}