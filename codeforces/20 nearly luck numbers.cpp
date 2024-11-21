// link :
// https://codeforces.com/problemset/problem/110/A
#include <iostream>
using namespace std;
int main() {
    string a;
    cin >> a;
    int b = 0;
    for (char i : a) {
        if (i == '4' || i == '7') {
            ++b;
        }
    }
    if (b == 7 || b == 4) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
