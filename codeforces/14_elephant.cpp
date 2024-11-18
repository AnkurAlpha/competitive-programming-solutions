// link :
// https://codeforces.com/problemset/problem/617/A
#include <cmath>
#include <iostream>
using namespace std;
int main() {
    int a, b = 0 ;
    cin >> a ;
    for ( int i = 5 ; i > 0 ; --i ) {
        if ( i <= a ) {
            b += floor(a/i) ;
            a = a%i ;
        }
    }
    cout << b ;
}
