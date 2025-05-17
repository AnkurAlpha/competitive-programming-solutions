#include <bits/stdc++.h>
using namespace std;
int main() {
    // let's try to do it with two pointer approach
    string x = "hello" ;
    string a ; cin >> a ;
    int l = 0 ;
    for (int i = 0 ; i < a.size() ; i++) {
        if ( a[i] == x[l]) {
            l++ ;
        }
    }
    if ( l == x.size()) cout << "YES" ;
    else cout << "NO" ;
}
// https://codeforces.com/problemset/problem/58/A
