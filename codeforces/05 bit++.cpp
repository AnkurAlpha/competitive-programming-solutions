// link :
// https://codeforces.com/problemset/problem/282/A
#include <iostream>
using namespace std;
int main() {
    int a;
    int j = 0 ;
    cin >> a ;
    for (int i = 0 ; i < a ; ++i) {
        string x ;
        cin >> x ;
        if (x == "++X" || x == "X++" ) {
            ++j ;
        } else {
            --j ;
        }
    }
    cout << j ;
}
