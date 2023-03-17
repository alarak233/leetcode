/*
 * @lc app=leetcode.cn id=2389 lang=cpp
 *
 * [2389] 和有限的最长子序列
 */

// @lc code=start
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
        vector<int> sums;
        int sum=0;
        for(int &num:nums){
            sum+=num;
            sums.push_back(sum);
        }
        vector<int> ans;
        for(int &q:queries){
            ans.push_back(upper_bound(sums.begin(),sums.end(),q)-sums.begin());
        }
        return ans;
    }
};
// @lc code=end

