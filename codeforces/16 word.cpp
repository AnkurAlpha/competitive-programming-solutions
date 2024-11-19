// link :
// https://codeforces.com/problemset/problem/59/A
#include <cctype>
#include <iostream>
#include <string>
using namespace std;
int main() {
    string a;
    cin >> a;
    int y = 0;
    for (char i : a) {
        if (isupper(i)) {
            y += 1;
        } else {
            y -= 1;
        }
    }
    if (y > 0) {
        for (char i : a) {
            cout << static_cast<char>(toupper(i));
        }
    } else {
        for (char i : a) {

            cout << static_cast<char>(tolower(i));
        }
    }
}
// need to debug
