// link :
// https://leetcode.com/problems/two-sum/
// @leet start
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>::iterator i1 ;
        vector<int>::iterator i2 ;
        vector<int> vec;
        int l1 = 0;
        int l2 = 0 ;
        bool cond = false ;
        for ( i1 = nums.begin() ; i1 != nums.end() ; ++i1) {
            l2 = 0 ;
            for (i2 = nums.begin(); i2 != nums.end() ; ++i2) {
                if ( i1 != i2 and *i1 + *i2 == target) {
                    cond = true;
                    vec.push_back(l1);
                    vec.push_back(l2) ;
                }
                if (cond == true) {
                    break;
                }
                ++l2 ;
            }
            if (cond == true) {
                break ;
            }
            ++l1 ;
        }
        return vec;
    }
};
// @leet end
