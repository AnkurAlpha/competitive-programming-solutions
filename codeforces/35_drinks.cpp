#include <bits/stdc++.h>
using namespace std;
int main() {
    int a; cin >> a;
    double sum = 0 ;
    for (int i = 0 ; i < a ;i++) {
        int x; cin >> x ;
        sum += x ;
    }
    cout << fixed << setprecision(12) << sum/(1.0*a) ;
}
/// https://codeforces.com/problemset/problem/200/B
