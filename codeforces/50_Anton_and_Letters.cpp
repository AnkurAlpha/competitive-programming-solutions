#include <bits/stdc++.h>
#include <string>
using namespace std;
vector <char> tokenizer (string x ) {
    stringstream ss(x) ;
    vector<char> vec ;
    string token ;
    while ( getline(ss, token ,',')) {
        for (char i : token) {
            if ( i != ' '){
                vec.push_back(i) ;
            }
        }
    }
    return vec ;
}
int main() {
    string x ;
    getline(cin,x) ;
    string y ;
    if( x.size() > 2 ) {
        for (int i = 1 ; i < x.size() -1 ; i++) {
            y.push_back(x[i]) ;
        }
        auto vec = tokenizer(y) ;
        set<char> s ;
        for (auto i : vec ) {
            s.insert(i) ;
        }
        cout << s.size() ;
    } else {
        cout << 0 ;
    }
}
/// jjust a brootforce
/// https://codeforces.com/problemset/problem/443/A
