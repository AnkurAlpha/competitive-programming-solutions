#include <bits/stdc++.h>
using namespace std;
void rec_sort(vector<int>&vec, int n){
    if ( n == 1 ) return ;
    for (int i = 0 ; i <= n-2 ; i++) {
        if (vec[i] > vec[i+1]){
            swap(vec[i],vec[i+1]) ;
        }
    }
    return rec_sort(vec, n-1);
}
int totalSum(vector<int>&vec) {
    int sum = 0 ;
    for (auto i : vec) {
        sum += i ;
    }
    return sum ;
}
int numberOfCoins(vector<int>&vec, int partial) {
    int n = vec.size() -1 ;
    int pSum = 0 ;
    while ( n >= 0 ) {
        pSum +=vec[n] ;
        if ( pSum > partial ) {
            break ;
        }
        n-- ;
    }
    return vec.size() - n ;
}
int main() {
    int a ; cin >> a;
    vector<int> vec ;
    for (int i = 0 ; i < a ; i++) {
        int x ; cin >> x ;
        vec.push_back(x) ;
    }
    rec_sort(vec,  vec.size() ) ;
    int sum = totalSum(vec) ;
    float part = sum/2.0 ;
    cout << numberOfCoins(vec, part) ;
}
// https://codeforces.com/problemset/problem/160/A
