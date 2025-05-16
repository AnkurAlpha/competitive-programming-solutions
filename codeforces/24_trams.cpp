#include <bits/stdc++.h>
using namespace std;
int main() {
    int a;
    cin >> a;
    int max = 0 ,current = 0 ;
    for (int i = 0 ; i < a ;i++ ) {
        int x ; cin >> x ;  // exit passengers
        int y ; cin >> y ;  // passengers in
        current -= x ;
        current += y ;
        if ( current > max ) max = current ;
    }
    cout << max ;
}
/// link : https://codeforces.com/problemset/problem/116/A
