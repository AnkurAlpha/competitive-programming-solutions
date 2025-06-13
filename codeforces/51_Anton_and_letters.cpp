// some optimazation of older one
#include <bits/stdc++.h>
using namespace std;
set <char> tokener (string s ) {
    stringstream ss(s) ;
    set <char> st ;
    string token  ;
    while (getline(ss, token , ',')) {
        for (auto i : token ) {
            if( i != ' '){
                st.insert(i) ;
            }
        }
    }
    return st ;
}
int main() {
    string x ;
    getline(cin , x ) ;
    x[0] = ' ' ; x[x.size() -1 ] = ' ' ;
    auto st = tokener(x) ;
    cout << st.size() ;
}
