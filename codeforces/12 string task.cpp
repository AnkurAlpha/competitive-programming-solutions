#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
    string a;
    cin >> a;
    vector<char> vec;
    for (char i : a) {
        string b = "aeiou";
        int x = count(b.begin(), b.end(), tolower(i));
        if (x == 0) {
            vec.push_back(tolower(i));
        }
    }
    for (char i : vec) {
        cout << "." << i ;
    }
    cout << endl ;
}
