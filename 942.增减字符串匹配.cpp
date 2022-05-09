/*
 * @lc app=leetcode.cn id=942 lang=cpp
 *
 * [942] 增减字符串匹配
 */

// @lc code=start
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> diStringMatch(string s) {
        int maxs=s.size();
        int mins=0;
        vector<int> ans;
        for(auto i:s){
            if(i=='I'){
                ans.push_back(mins);
                mins++;
            }
            else{
                ans.push_back(maxs);
                maxs--;
            }
        }
        ans.push_back(mins);
        return ans;
    }
};
// @lc code=end

