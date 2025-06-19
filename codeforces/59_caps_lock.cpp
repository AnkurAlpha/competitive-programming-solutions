#include <bits/stdc++.h>
#include <cctype>
using namespace std;
int main() {
    string a; cin >> a;
    bool cond = false ;
    bool firstCapital  = false ;
    if (isupper(a[0])) firstCapital = true ;
    for (int i = 1 ; i < a.size() ; i++ ){
        if ( firstCapital) {
            if ( islower(a[i])) {
                cond = true ;
                break ;
            }
        } else {
            if ( islower(a[i])) {
                cond = true ;
                break ;
            }
        }
    }
    if ( firstCapital && cond  ) {
        a[0]= toupper(a[0]) ;
        for (int i = 1 ; i < a.size() ; i++) {
            a[i] = tolower(a[i]) ;
        }
    }
    cout << a  ;
}
// to be done next time :
// https://codeforces.com/problemset/problem/131/A
