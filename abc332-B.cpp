//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;
// 以下の操作を K 回繰り返した後で、
// グラスとマグカップに水がそれぞれ何 ml ずつ入っているか求めてください。
// 1. グラスが水で満たされているとき、すなわちグラスにちょうど 
//       G ml 入っているとき、グラスの水をすべて捨てる。
// 2. そうでなく、マグカップが空であるとき、マグカップを水で満たす。
// 3. 上のいずれでもないとき、マグカップが空になるかグラスが水で満たされるまで、
//    マグカップからグラスに水を移す。

int K, G, M;

int main() {
    //入力
    cin >> K >> G >> M;

    int G_water = 0;
    int M_water = 0;
    for (int i = 0; i < K; i++) {
        if (G_water == G) G_water = 0; //1
        else if(M_water == 0) M_water = M; //2
        else {
            //移す水の量はマグカップに入っている水の量M_water mlと、
            //グラスを水で満たすために必要な水の量(G - G_water)mlのうち小さい方である
            //    ((グラス全容量) - (今入っている水の量)) = (空いている容量)
            int tmp = min(G - G_water, M_water); //ここです！
            M_water -= tmp;
            G_water += tmp;
        }
    }

    //出力
    cout << G_water << " " << M_water << endl;
    return 0;
}