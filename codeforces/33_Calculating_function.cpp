#include <bits/stdc++.h>
using namespace std;
long calculateFunction(long n ) {
    if ( n%2 != 0 ) n = abs(n) * -1 ;
    else n = abs(n) ;
    return n ;
}
long calcFunction(long n) {
    if ( n == -1 ) return -1 ;
    return calculateFunction(n) + calcFunction(calculateFunction(abs(n)-1)) ;
}
int main() {
    long x ; cin >> x ;
    cout << endl << calcFunction(x) ;
}
// Problem : time limit exceeding
