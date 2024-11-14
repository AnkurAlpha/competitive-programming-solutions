// link :
// https://codeforces.com/problemset/problem/281/A
#include <iostream>
#include <string>
using namespace std;
int main() {
  string a;
  cin >> a;
  char x = toupper(a[0]);
  cout << x;
  string ::iterator i;
  for (i = a.begin() + 1; i != a.end(); ++i) {
    cout << *i;
  }
}
