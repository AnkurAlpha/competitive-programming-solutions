#include <bits/stdc++.h>
using namespace std;
void rmWUB(string &s ) {
    for (int i = 0 ; i < s.size() - 2 ; i++) {
        if ( s[i] == 'W' && s[i+1] == 'U'&& s[i+2]== 'B') {
            s[i] = ' ' ; s[i+1] = ' ' ; s[i+2] = ' ' ;
        }
    }
}
vector<string> tokener (string s ) {
    rmWUB(s) ;
    stringstream ss(s) ;
    string token ;
    vector<string> vec ;
    while ( getline(ss, token , ' ')) {
        if ( token != "") {
            vec.push_back(token)  ;
        }
    }
    return vec ;
}
int main() {
    string s ; cin >> s;
    if ( s.size()>3) {
        auto vec = tokener(s) ;
        for (auto i : vec) {
            cout << i << " ";
        }
    } else {
    cout << s  ;
    }
}
// https://codeforces.com/problemset/problem/208/A
