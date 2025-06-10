#include <bits/stdc++.h>
using namespace std;
int main() {
    string x = "qwertyuiopasdfghjklzxcvbnm" ;
    int a; cin >> a;
    string y ; cin >> y ;
    if ( a < 26 ){
        cout << "NO";
        return 0 ;
    }
    map <char,int> mp  ;
    for (int i = 0 ; i < x.size() ; i++) {
        mp[x[i]] = 0  ;
    }
    for (auto i : y ) {
        char c = tolower(i) ;
        mp[c]++ ;
    }
    for (auto i : mp )  {
        // cout << i.first << " " << i.second << endl ;
        if (i.second == 0 ) {
            cout << "NO" ;
            return 0 ;
        }
    }
    cout << "YES" ;

}
// https://codeforces.com/problemset/problem/520/A
