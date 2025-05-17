#include <bits/stdc++.h>
using namespace std;
int main() {
    int x ; cin >> x;
    int cnt = 1 ;
    int prevCnt = 0 ;
    for (int i = 0 ; i < x ; i++) {
        int a ; cin >> a;
        if ( i == 0 ) prevCnt = a ;
        if (prevCnt != a ) {
            cnt ++ ;
            prevCnt = a ;
        }
    }
    cout << cnt ;
}
// https://codeforces.com/problemset/problem/344/A
