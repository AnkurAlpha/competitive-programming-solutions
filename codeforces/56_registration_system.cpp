#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    int x ; cin >> x;
    set <string> st ;
    int prevLen = 0 ;
    for (int i= 0 ; i< x ;i++) {
        string a ; cin >> a ;
        st.insert(a) ;
        if ( prevLen == st.size() ) {
            a = a + "1" ;
            st.insert(a) ;
            if ( prevLen == st.size() ) {
                while ( st.size() == prevLen) {
                    int cnt = a[a.size()-1] - '0';
                    cnt++ ;
                    a.pop_back() ;
                    a += to_string(cnt) ;
                    st.insert(a) ;
                }
            }
            cout << a << endl ;
        } else {
            cout << "OK" << endl ;
        }
        prevLen++ ;
    }
}
