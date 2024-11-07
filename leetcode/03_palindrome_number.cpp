// link:
// https://leetcode.com/problems/palindrome-number/
// @leet start
#include <string>
using namespace std;
class Solution {
    public:
        bool isPalindrome(int x) {
            string s = to_string(x);
            string a ;
            for (int i = s.length() - 1 ; i >= 0 ; --i ) {
                a += s[i] ;
            }
            if (s == a) {
                return true;
            } else {
                return false;
            }
        }
};
// @leet end
