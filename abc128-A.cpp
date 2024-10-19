#include <iostream>
using namespace std;

int main() {
    int A, P;
    cin >> A >> P;
    //林檎１つ->かけら3つ
    //かけら２つでアップルパイ一つ
    int ans = ((A * 3) + P) / 2;
    cout << ans << endl;
}