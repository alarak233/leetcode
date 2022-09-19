/*
 * @lc app=leetcode.cn id=1685 lang=cpp
 *
 * [1685] 有序数组中差绝对值之和
 */

// @lc code=start
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        vector<int> ans;
        int sum=0;
        int len=nums.size();
        for(auto num:nums){
            sum+=num-nums[0];
        }
        ans.push_back(sum);
        for(int i=1;i<nums.size();i++){
            sum=sum-(nums[i]-nums[i-1])*(len-2*i);
            ans.push_back(sum);
        }
        return ans;
    }
};
// @lc code=end

