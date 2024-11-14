// link :
// https://codeforces.com/problemset/problem/112/A
#include <cwctype>
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() {
    // cout << int('a'); // for getting to know ascii values or a character
    string a , b;
    cin >> a;
    cin >> b ;
    int i = 0 ;
    for ( int x = 0 ; x < a.length() ; ++x) {
            char l = tolower(a.at(x));
            char m = towlower(b.at(x));
            if ( int(l) >  int(m) ) {
                ++i ;
            }
            if  ( int(l) < int(m) ) {
                --i ;
            }
    }
    cout << i ;
}
