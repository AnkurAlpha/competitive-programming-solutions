// link :
// https://codeforces.com/problemset/problem/41/A
#include <iostream>
using namespace std;
int main() {
    string a , c;
    cin >> a ;
    cin >> c;
    string b = "" ;
    for ( int i = a.length() - 1 ; i >= 0  ; --i ) {
        b.push_back(a.at(i));
    }
    if ( c== b) {
        cout << "YES" ;
    } else {
        cout << "NO" ;
    }
}
