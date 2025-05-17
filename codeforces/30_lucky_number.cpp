#include <bits/stdc++.h>
using namespace std;
bool checkLucky(int n ){
    bool cond = true ;
    while (n > 0) {
        int x = n%10 ;
        int n = n/10 ;
        cout << n << endl ;
        if (x != 4 && x != 7 ) {
            cond = false ;
            break ;
        }
    }
    return cond ;
}
bool partiallyLucky ( int n ) {
    for (int i = n ; n > 1 ; i--) {
        if (checkLucky(i)){
            if ( n%i == 0 ) return true ;
        }
    }
    return false ;
}
int main() {
    // brute force
    int x ; cin >> x;
    // if ( partiallyLucky(x)) cout << "YES" ;
    // else cout << false ;
    checkLucky(x) ;
}
// for review
