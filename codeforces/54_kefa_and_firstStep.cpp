#include <bits/stdc++.h>
using namespace std;
vector<int> tokener (string s ) {
    string token ;
    stringstream ss(s) ;
    vector<int> vec;
    while ( getline(ss,token , ' ')) {
        int x= stoi(token) ;
        vec.push_back(x) ;
    }
    return vec ;
}
int main() {
    int a ; cin >> a ;
    int prev = 0 ;
    int cnt = 0 ; int maxCnt = 0 ;
    cin.ignore() ;
    string s ;
    getline(cin,s) ;
    auto vec = tokener(s) ;
    for (int i = 0 ; i < a ; i++) {
        int x = vec[i];
        if ( x >= prev ) cnt ++ ;
        else cnt = 1 ;
        prev = x ;
        maxCnt = max(cnt,maxCnt) ;
    }
    cout << maxCnt ;
}
// https://codeforces.com/problemset/problem/580/A
