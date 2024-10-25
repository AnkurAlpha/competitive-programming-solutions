// link :
// https://codeforces.com/problemset/problem/158/A
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int pe, stg;
    cin >> pe >> stg;
    vector<int> vec;
    for (int i = 0; i < pe; ++i) {
        int j;
        cin >> j;
        vec.push_back(j);
    }
    int z = 0;
    for (int i : vec) {
        if (i >= vec[stg-1] and i != 0 ) {
            ++z;
        }
    }
    cout << z ;
}
