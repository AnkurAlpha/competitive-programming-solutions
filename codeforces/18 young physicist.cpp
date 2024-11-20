// link
// https://codeforces.com/problemset/problem/69/A
#include <iostream>
using namespace std;
int main() {
    int a = 0, b = 0, c = 0;
    int x ;
    cin >> x ;
    while ( x > 0) {
        int u , v , w ;
        cin >> u >> v >> w ;
        a += u ;
        b += v ;
        c += w ;
        --x ;
    }
    if ( a ==0 && b == 0 && c == 0 ) {
        cout << "YES" ;
    }else {
        cout << "NO" ;
    }
}
