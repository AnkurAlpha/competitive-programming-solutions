// link :
// Way Too Long Words
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int i ;
    cin >> i ;
    vector <string> vec;
    while ( i != 0 ) {
        string z  ;
        cin >> z ;
        int x = z.length() ;
        if (x > 10 ) {
            string m ;
            string num = to_string(x-2) ;
            m = z[0] + num + z[x-1] ;
            vec.push_back(m) ;
        } else {
            vec.push_back(z);
        }
        --i ;
    }
    for ( string y : vec) {
        cout << y << endl ;
    }
}




