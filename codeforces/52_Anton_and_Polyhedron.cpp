#include <bits/stdc++.h>
using namespace std;
int main() {
    int a; cin >> a;
    string xx ;
    int x = 0 ;
    for (int i = 0 ; i < a ; i++){
        cin >> xx ;
        if ( xx == "Tetrahedron") x += 4 ;
        else if ( xx == "Cube") x += 6 ;
        else if ( xx == "Octahedron") x += 8 ;
        else if ( xx == "Dodecahedron") x+= 12 ;
        else if ( xx == "Icosahedron") x += 20 ;
    }
    cout << x ;
}
