#include <bits/stdc++.h>
using namespace std;
int main() {
    int  a; cin >> a;
    int c = 0 ;
    for (int i = 0 ; i < a ; i++) {
        int x ; cin >> x;
        int y ; cin >> y ;
        if ( y - x >= 2 ) c++ ;
    }
    cout << c ;
}
// https://codeforces.com/problemset/problem/467/A
