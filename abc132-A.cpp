#include <iostream>
using namespace std;

int main (){
    int string S;
    cin >> S;
    sort(all(S));

    if(S[0] == S[1] and S[1] != S[2] and S[2] == S[3]) cout << "Yes" << endl;
    else cout << "No" << endl;
}