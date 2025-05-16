#include <bits/stdc++.h>
using namespace std;
bool checkDistinct (const string &a ) {
    for (int i = 0 ; i < a.size(); i++) {
        for (int j = i+1 ; j < a.size() ; j++) {
            if (a[i] == a[j]) {
                return false ;
            }
        }
    }
    return true ;
}
int find_next_distinct_digit(int a ) {
    a++ ;
    while (true ) {
        if (checkDistinct(to_string(a))) {
            return a ;
        }
        a++;
    }
}
int main() {
    int  a ;
    cin >> a;
    cout << find_next_distinct_digit(a) ;
}
/// https://codeforces.com/problemset/problem/271/A
