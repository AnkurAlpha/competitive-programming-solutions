#include <bits/stdc++.h>
using namespace std;
// by using the constraints
bool checkPartialLucky ( int n ) {
    vector <int> v =  { 4 , 7 , 44 , 47 , 74 , 77 ,
        444, 447 , 474, 477, 744, 747 , 774, 777} ;
    for (auto i : v ) {
        if ( n%i == 0 ) return true ;
    }
    return false ;

}
int main() {
    int x ; cin >> x ;
    if ( checkPartialLucky(x)) {
        cout << "YES" ;
    } else cout << "NO" ;
}
