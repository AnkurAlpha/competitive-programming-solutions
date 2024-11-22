// link
// https://codeforces.com/problemset/problem/734/A
#include <iostream>
using namespace std;
int main() {
    int a , g = 0 ;
    cin >> a;
    string b ;
    cin >> b ;
    for (char i : b) {
        if( i == 'A' ) {
            ++g  ;
        } else {
            --g ;
        }
    }
    if ( g > 0 ) {
        cout << "Anton" ;
    } else if (g < 0 )  {
        cout << "Danik" ;
    } else {
        cout << "Friendship" ;
    }
}
