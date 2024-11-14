// link :
// https://codeforces.com/problemset/problem/339/A
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    string a;
    cin >> a;
    vector<int> vec;
    for (int i = 0; i < a.length(); i = i + 2) {
        char x = a.at(i);
        string y = to_string(x);
        int z = stoi(y);
        vec.push_back(z);
    }
    vector<int>::iterator i1, i2;
    for (i1 = vec.begin(); i1 != vec.end(); i1++) {
        for (i2 = i1; i2 != vec.end(); i2++) {
            if (*i1 > *i2) {
                int x = *i1;
                *i1 = *i2;
                *i2 = x;
            }
        }
    }
    for (i1 = vec.begin(); i1 != vec.end(); ++i1) {
        cout << *i1-48;
        if (i1 != vec.end() - 1) {
            cout << "+";
        }
    }
}
