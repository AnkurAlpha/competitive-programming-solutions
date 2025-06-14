#include <bits/stdc++.h>
using namespace std;
int main() {
    int n ; cin >> n ;
    int totalChampionships = n *(n-1) ;
    map<int,int> mp ;
    for (int i= 0 ; i < n ;i++) {
        pair <int,int> p ;
        cin >> p.first >> p.second ;
        mp.insert(p) ;
    }
}
// no Idea
// https://codeforces.com/problemset/problem/268/A
