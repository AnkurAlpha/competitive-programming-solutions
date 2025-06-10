#include <bits/stdc++.h>
using namespace std;
int main() {
    int x ;
    cin >> x;
    int a; int b ;
    cin >> a;
    map<int,int> mp ;
    for (int i  = 1 ; i <= x ; i++) {
        mp[i] = 0 ;
    }
    for (int i = 0 ; i < a ; i++) {
        int c ; cin >> c ;
        mp[c]++ ;
    }
    cin >> b ;
    for (int i = 0 ; i < b ; i++) {
        int c ; cin >> c ;
        mp[c]++ ;
    }
    for (auto i : mp) {
        // cout << i.first << " " << i.second  << endl ;
        if( i.second == 0 ) {
            cout << "Oh, my keyboard!" ;
            return 0 ;
        }
    }
    cout << "I become the guy."  ;
}
