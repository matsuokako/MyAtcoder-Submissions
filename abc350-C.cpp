#include <iostream>
#include <algorithm>
using namespace std;

int N;
int A[200009];
int ans1[200009], ans2[200009];
int pos[200009];

int main() {
    //入力
    cin >> N;
    for (int i = 1; i <= N; i++) cin >> A[i];
    
    //Aの中で値iがある位置を表す配列pos
    for (int i = 1; i <= N; i++) {
        pos[A[i]] = i;
    }

    int count = 0;
    for (int i = 1; i <= N; i++) {
        if (i == A[i]) {
            continue;
        } else {
            ans1[++count] = i;
            ans2[count] = pos[i];
            int j = A[i];
            swap(A[i], A[pos[i]]);
            swap(pos[i], pos[j]);
        }
    }

    cout << count << endl; //交換回数
    for (int i = 1; i <= count; i++) {
        cout << ans1[i] << " " << ans2[i] << endl;
    }

    return 0;
}