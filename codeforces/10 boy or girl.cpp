// link :
// https://codeforces.com/problemset/problem/236/A
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
    string a;
    cin >> a;
    vector<char> vec;
    for (char i : a) {
        int x = count(vec.begin(), vec.end(), i);
        if ( x == 0 ) {
            vec.push_back(i);
        }
    }
    int b = vec.size() ;
    if (b%2 == 0 ) {
        cout << "CHAT WITH HER!";
    } else {
        cout << "IGNORE HIM!" ;
    }
}
