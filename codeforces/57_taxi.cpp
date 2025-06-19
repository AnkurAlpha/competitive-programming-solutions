#include <bits/stdc++.h>
using namespace std;
int main() {
    int a ; cin >> a;
    map<int,int> mp ;
    for (int i = 1 ; i <= 4 ; i++) {
        mp[i] = 0 ;
    }
    for (int i = 0; i < a ;i++) {
        int x; cin >> x;
        mp[x]++ ;
        if ( x == 1 && mp[3] > 0 ) {
            mp[x]--, mp[3]--;
            mp[4]++ ;
        }else if ( x == 3 && mp[1] > 0 ) {
            mp[x]--, mp[1]-- ;
            mp[4]++ ;
        } else if ( x == 2 && mp[2]>1) {
            mp[x]-= 2 ;
            mp[4]++ ;
        } else if ( x == 1 && mp[1]>= 4 ) {
            mp[1]-= 4 ;
            mp[4]++ ;
        } else if ( x == 1 && mp[2] > 0 ) {
            mp[x]-- , mp[2]-- ;
            mp[3]++ ;
        } else if (x == 2 && mp[1]> 0 ) {
            mp[1]--, mp[x]--;
            mp[3]++ ;
        }    }
    // this is the last try
    if (mp[1]>2){
        mp[1]-= 3  ;
        mp[3]++ ;
    }
    if ( mp[1]> 1 ) {
        mp[1]-= 2 ;
        mp[2]++;
    }
    if (   mp[2]==2 ) {
         mp[2]--;
        mp[4]++;
    }

    int cnt = 0 ;
    for (int i = 1 ; i <= 4 ; i++ ) {
        cnt += mp[i] ;
    }
    cout << cnt ;
}
