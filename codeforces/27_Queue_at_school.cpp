#include <bits/stdc++.h>
using namespace std;
void swapper ( string &a ) {
    for (int i = 0 ; i < a.size() -1 ; i++) {
        if (a[i] == 'B' && a[i+1] == 'G') swap(a[i],a[i+1]) ;
    }
}
int main() {
    int a , b ;
    cin >> a >> b ;
    string x ; cin >> x;
    for (int i = 0 ; i < b - 1 ; i++) {
        swapper(x) ;
    }
    cout << x ;
}
// for next session
// https://codeforces.com/problemset/problem/266/B
