#include <iostream>
#include <vector>
using namespace std;
void sorter (vector<int> & vec , int a) {
    if ( a == 1 ) return ;
    for (int i = 0 ; i < a-1 ; i++) {
        if ( vec[i] > vec[i+1]) {
            swap(vec[i], vec[i+1])  ;
        }
    }
    sorter(vec, a - 1) ;
}
int main() {
    int a ; cin >> a;
    vector <int> vec ;
    for (int i = 0 ; i < a ; i++) {
        int x ; cin >> x ;
        vec.push_back(x) ;
    }
    sorter(vec, a) ;
    for (auto i : vec) {
        cout << i  << " " ;
    }
}
