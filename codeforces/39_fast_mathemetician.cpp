#include <iostream>
#include <string>
using namespace std;
int main() {
    string a , b;
    cin >> a >> b ;
    for (int i = 0; i < a.size() ; i++ ) {
        int x = a[i] - '0' ;
        int y = b[i] - '0' ;
        if (x != y && ( x == 0 || y == 0 )) {
            cout << 1 ;
        } else {
            cout << 0 ;
        }
    }
}
