// link :
// https://codeforces.com/problemset/problem/96/A
#include <iostream>
using namespace std;
int main() {
    string a;
    cin >> a;
    char x = a[0];
    int y = 0;
    for (char i : a) {
        if (x == i) {
            ++y;
        } else {
            y = 1;
            x = i;
        }
        if (y >= 7) {
            break;
        }
    }
    if (y >= 7) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
