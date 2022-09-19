/*
 * @lc app=leetcode.cn id=643 lang=cpp
 *
 * [643] 子数组最大平均数 I
 */

// @lc code=start
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxk,sum;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        maxk=sum;
        
        for(int i=0;i<nums.size()-k;i++){
            sum=sum-nums[i]+nums[i+k];
            maxk=max(maxk,sum);            
        }
        return maxk/k;
    }
};
// @lc code=end

