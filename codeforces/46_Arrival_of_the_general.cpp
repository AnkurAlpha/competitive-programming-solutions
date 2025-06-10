#include <bits/stdc++.h>
using namespace std;
int main() {
    int c ; cin >> c;
    vector<int> vec ;
    for (int i = 0 ; i < c ; i++) {
        int x; cin >> x;
        vec.push_back(x) ;
    }
    int max = INT_MIN ;
    int min = INT_MAX ;
    int mini = 0 , maxi = 0 ;
    for (int i = 0 ; i < c ; i++) {
        if ( max < vec[i]) {
            maxi = i ;
            max = vec[i] ;
        }
        if ( min >= vec[i]) {
            mini =  i ;
            min = vec[i] ;
        }
    }
    // for max
    // no need to perform anything operation

    // for min
    if ( mini < maxi ) {
        mini = c - 2 - mini ;
    } else {
        mini = c - 1 - mini ;
    }
    cout << maxi + mini ;
}
// https://codeforces.com/problemset/problem/144/A
