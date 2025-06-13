#include <bits/stdc++.h>
using namespace std;
int main() {
    int a , b , c ;
    cin >> a >> b >> c ;
    /// cases if
    /// a > b > c
    /// then : max = a * ( b +c )
    /// a < b < c
    /// then : max = (a + b ) * c
    /// a < b > c
        /// then let a = 1 , b = 3  ,c = 2  ( a < c )
        /// (1 + 3) * 2 = 8
        /// max = ( a + b ) * c
        /// if ( a > c ) , then vice versa
        /// if a = c and a != 1
        /// then a * b * c
        /// if a = 1  && a = c
        /// a + b + c
    /// a > b < c
        /// then let a = 2 , b = 1 , c = 3
        /// then : max = a * ( b + c ) ;
        /// vice verse : max = (a + b ) * c
        /// if a = c ;
        /// then a * b *c
    // let's code !!
    int max ;
    if ( a >b && b > c ) {
        if ( 1 == c)  {
            max = a * ( b +c ) ;
        } else {
            max = a * b * c ;
        }
    } else if ( a < b && b < c ) {
        if ( a == 1 ) {
            max = (a + b ) * c ;
        } else {
            max = a * b * c ;
        }
    } else if ( a < b && b > c ) {
        if ( a < c ) {
            if ( a == 1 ) {
                max = ( a + b ) * c ;
            } else {
                max = a * b * c ;
            }
        } else if ( a > c ) {
            max = a * ( b + c) ;
        } else {
            if ( a != 1 ) {
                max = a * b * c ;
            } else {
                max = a + b + c ;
            }
        }
    } else if ( a > b && b < c ) {
        if ( a > c ) {
            max = a * ( b + c ) ;
        } else if ( a < c ) {
            max = (a + b ) * c ;
        } else {
            max = a * b * c ;
        }
    } else {
        if ( a == 1 && a == b && b == c  ) {
            max = a + b + c ;
        } else  {
            max = a * b * c ;
        }
    }
    cout << max ;
    // will do later
    // https://codeforces.com/problemset/problem/479/A
}
