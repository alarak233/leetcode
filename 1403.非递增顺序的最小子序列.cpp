/*
 * @lc app=leetcode.cn id=1403 lang=cpp
 *
 * [1403] 非递增顺序的最小子序列
 */

// @lc code=start
#include<vector>
#include<algorithm>
#include <numeric>
using namespace std;

class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        int sum=accumulate(nums.begin(),nums.end(),0);
        int sum1=0;
        int i=0;
        vector<int> ans;
        while(sum1<=sum/2&&i<nums.size()){
            ans.push_back(nums[i]);
            sum1+=nums[i];
            i++;
        }
        return ans;
    }
};
// @lc code=end

