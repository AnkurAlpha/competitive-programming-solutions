// link :
// https://codeforces.com/problemset/problem/266/A
#include <iostream>
#include <string>
using namespace std;
int main() {
    int a, x = 0;
    string b;
    cin >> a;
    cin >> b;
    string::iterator it, i;
    i = b.begin();
    for (it = b.begin(); it != b.end(); ++it) {
        if (it != b.begin()) {
            i = it - 1;
        }
        if (*i == *it && i != it) {
            ++x;
        }
    }
    cout << x;
}
