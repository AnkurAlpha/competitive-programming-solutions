#include <iostream>
using namespace std;
int main() {
    int a; cin >> a;
    for (int i = 0 ; i < a ; i++) {
        int x ; cin >> x;
        int y ; cin >> y ;
        int z = y - x%y ;
        if ( z == y ) {
            cout << 0 ;
        } else {
            cout << z ;
        }
        cout << endl ;
    }
}
