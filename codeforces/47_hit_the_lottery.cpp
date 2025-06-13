#include <bits/stdc++.h>
using namespace std;
int main() {
    int a;
    cin >> a;
    int x = 0;
    while (a) {
        if (a >= 100) {
            x += a / 100;
            a = a % 100;
        } else if (a >= 20) {
            x += a / 20;
            a = a % 20;
        } else if ( a >= 10 ) {
            x += a/10 ;
            a = a%10 ;
        } else if ( a >= 5 ) {
            x += a/5 ;
            a = a%5 ;
        } else if ( a >= 1 ) {
            x += a/1 ;
            a = a%1 ;
        }
    }
    cout << x ;
}
// https://codeforces.com/problemset/problem/996/A
