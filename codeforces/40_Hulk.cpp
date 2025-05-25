#include <iostream>
using namespace std;
int main() {
    int a ; cin >> a;
    int x = 1 ;
    for (int i = 0 ; i < a ;i++) {
        if( x > 0 ) {
            cout << "I hate " ;
        }else cout << "I love " ;
        x *= -1 ;
        if ( i != a - 1 ) {
            cout << "that " ;
        } else {
            cout << "it" ;
        }
    }
}
