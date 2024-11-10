#include <iostream>
using namespace std;
int main() {
  int a[5][5];
  int x, y;
  for (int i = 0; i < 5; ++i) {
    cin >> a[i][0] >> a[i][1] >> a[i][2] >> a[i][3] >> a[i][4];
    for (int j = 0; j < 5; ++j) {
      if (a[i][j] == 1) {
        x = i;
        y = j;
      }
    }
  }
  x = ++x;
  y = ++y;
  x = 3 - x;
  y = 3 - y;
  if (x < 0) {
    x = -x;
  }
  if (y < 0) {
    y = -y;
  }
  cout << x + y;
}
