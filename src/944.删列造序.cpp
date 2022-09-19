/*
 * @lc app=leetcode.cn id=944 lang=cpp
 *
 * [944] 删列造序
 */

// @lc code=start
#include<string>
#include<vector>
using namespace std;
class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int ans=0;
        for(int i=0;i<strs[0].size();i++){
            for(int j=0;j<strs.size()-1;j++){
                if(strs[j][i]>strs[j+1][i]){
                    ans++;
                    break;
                }
            }
        }
        return ans;
    }
};
// @lc code=end

