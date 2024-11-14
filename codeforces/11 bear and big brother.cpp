#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    int i = 0 ;
    while (a <= b ) {
        ++i ;
        a = a * 3 ;
        b = b * 2 ;
    }
    cout << i ;
}
