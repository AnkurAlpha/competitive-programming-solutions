#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int x = s.size() ;
        for (int i = 0 ; i < x ; i= i+2 ) {
            string ss ;
            ss += s[i] ; ss+= s[i+1] ; /// do concatenation
            if ( ss == "00") {
                cout << "A" ;
            } else if (ss == "01") {
                cout << "T" ;
            } else if (ss == "10") {
                cout << "C" ;
            } else if ( ss =="11") {
                cout << "G";
            }
        }
        cout << endl ;
    }

}

