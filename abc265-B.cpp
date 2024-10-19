#include <iostream>
using namespace std;

int a[100010];
int bonus[100010];

int main() {
    //N個の部屋、M個のボーナス部屋
    //待ち時間はT
    //高橋くんは部屋Nに着くことができるか。
    int n,m;
    long long t;
    cin >> n >> m >> t;
    for(int i=1; i < n; i++) {
        cin >> a+i;
    }
    for(int i=0; i < m; i++) {
        int x,y;
        cin >> x >> y;
        bonus[x] = y;
    }

    //i -> i+1
    for(int i=1; i < n; i++) {
        if(t <= a[i]){
            puts("No");
            return 0;
        }
        t -= a[i];
        t += bonus[i+1];
    }

    puts("Yes");
}