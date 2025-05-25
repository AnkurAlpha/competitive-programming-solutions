#include <bits/stdc++.h>
using namespace std;
int main() {
    // position = [a + (n-1)d ]
    int a , b ;
    cin >> a >>  b;
    int ans ;
    // first for odd integers
    if (b <= a/2 || b <= a/2 + 1 && a%2 != 0 ) { /// i.e odd
        // 10 - 5 -1 = 4 < 10/2 = 5
        // if a = 10 , b = 3 , ans = 5 [position = 3]
        // odd series : 1 , 3 , 5 , n = 3 = b
        int n = b ;
        ans = 1 + (n-1)* 2 ; /// d = 2
    } else { /// for even position
        // let input = 10 , 7
        // even series : 2 , 4 , 6 , 8 , 10
        // n = 3 , position = 8
        int n =  b - a/2  ; // n =  b - a/2
                         // n = 6 - 10/2 = 1
        ans = 2 + (n-1)*2 ;
    }
    cout << ans ;
}
///     odd     |       even
// 1, 3, 5, 7, 9, 2, 4, 6, 8, 10
// 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
// let's test edge cases , (position 5, 6 ) , second try
// suppose :
// 1, 3, 5, 7, 9, 2, 4, 6, 8 /// a = 9 , b = 5
// 1, 2, 3, 4, 5, 6, 7, 8, 9 /// position odd
// edge cases :
// 10  5 = pased
// 10 6 = passed
//
// Tried a lot but something is missing IG ^^;
// link : https://codeforces.com/problemset/problem/318/A
// moving next question
