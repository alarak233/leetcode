/*
 * @lc app=leetcode.cn id=1641 lang=cpp
 *
 * [1641] 统计字典序元音字符串的数目
 */

// @lc code=start
#include<vector>
using namespace std;

class Solution {
public:
    int countVowelStrings(int& n) {
        vector<int> v={5,4,3,2,1};
        for(int i=1;i<n;i++){
            v[3]+=v[4];
            v[2]+=v[3];
            v[1]+=v[2];
            v[0]+=v[1];
        }
        return v[0];
    }
};
// @lc code=end

