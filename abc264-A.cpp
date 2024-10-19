#include <iostream>
using namespace std;
int main() {
    int l, r;
    cin >> l >> r;

    if (l==1) {
        if(r==1) {cout << "a" << endl;}
        if(r==2) {cout << "at" << endl;}
        if(r==3) {cout << "atc" << endl;}
        if(r==4) {cout << "atco" << endl;}
        if(r==5) {cout << "atcod" << endl;}
        if(r==6) {cout << "atcode" << endl;}
        if(r==7) {cout << "atcoder" << endl;}
    }
    if (l==2) {
        if(r==2) {cout << "t" << endl;}
        if(r==3) {cout << "tc" << endl;}
        if(r==4) {cout << "tco" << endl;}
        if(r==5) {cout << "tcod" << endl;}
        if(r==6) {cout << "tcode" << endl;}
        if(r==7) {cout << "tcoder" << endl;}
    }
    if (l==3) {
        if(r==3) {cout << "c" << endl;}
        if(r==4) {cout << "co" << endl;}
        if(r==5) {cout << "cod" << endl;}
        if(r==6) {cout << "code" << endl;}
        if(r==7) {cout << "coder" << endl;}
    }
    if (l==4) {
        if(r==4) {cout << "o" << endl;}
        if(r==5) {cout << "od" << endl;}
        if(r==6) {cout << "ode" << endl;}
        if(r==7) {cout << "oder" << endl;}
    }
    if (l==5) {
        if(r==5) {cout << "d" << endl;}
        if(r==6) {cout << "de" << endl;}
        if(r==7) {cout << "der" << endl;}
    }
    if (l==6) {
        if(r==6) {cout << "e" << endl;}
        if(r==7) {cout << "er" << endl;}
    }
    if (l==7) {
        if(r==7) {cout << "r" << endl;}
    }
    
    return 0;
    

}