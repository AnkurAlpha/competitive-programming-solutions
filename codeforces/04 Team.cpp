// link :
// https://codeforces.com/problemset/problem/231/A
#include <iostream>
using namespace std;
int main() {
    int a ;
    int l = 0 ;
    cin >> a ;
    for (int i = 0 ; i < a ; ++i) {
        int x,y,z;
        cin >> x >> y >> z ;
        int sum = x + y + z ;
        if (sum >= 2 ) {
            ++l ;
        }
    }
    cout << l ;
}
