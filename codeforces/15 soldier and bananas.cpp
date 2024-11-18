#include <iostream>
using namespace std;
int main() {
    int bananas, has, initial;
    cin >> initial >> has >> bananas;
    int total = 0;
    for (int i = 1; i <= bananas; ++i) {
        total += i * initial;
    }
    int borrow = total - has;
    if (borrow < 0) {
        cout << 0;
    } else {
        cout << borrow;
    }
}
