/*
 * @lc app=leetcode.cn id=645 lang=cpp
 *
 * [645] 错误的集合
 */

// @lc code=start
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> numsNum(nums.size());
        for(auto num:nums){
            numsNum[num-1]++;
        }
        vector<int> ans(2);
        for(int i=0;i<numsNum.size();i++){
            if(numsNum[i]==0)ans[1]=i+1;
            if(numsNum[i]==2)ans[0]=i+1;
        }
        return ans;
    }
};
// @lc code=end

