#include <bits/stdc++.h>
using namespace std;
int main() {
    // position = [a + (n-1)d ]
    int a , b ;
    cin >> a >> b ;
    int pos ;
    cout << endl << a - (a - b) << " " << a/2 ;
    if ( a - b > a/2 ) {
        // even case
        b = a -(a - b) ;
        pos = ( 2 + (b-1)*2) ;
    } else {
        /// odd case
        pos =  ( 1 + ( b-1) * 2 ) ;
        cout << "odd" ;
    }
    cout << pos ;
}
/// will be solved in stream
