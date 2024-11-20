// link ;
// https://codeforces.com/problemset/problem/977/A
#include <iostream>
using namespace std;
int main() {
    long a;
    int b ;
    cin >> a >> b ;
    for ( int i = 0 ; i < b ; ++i ) {
        if ( a%10 == 0 ) {
            a /= 10 ;
        }else {
            --a ;
        }
    }
    cout << a ;
}
