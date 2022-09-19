/*
 * @lc app=leetcode.cn id=713 lang=cpp
 *
 * [713] 乘积小于K的子数组
 */

// @lc code=start
#include<vector>
using namespace std;
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int i=0;
        int j=0;
        int ans=0;
        int acc=1;
        while(j<nums.size()){
            acc*=nums[j];
            while(acc>=k&&i<=j){
                acc/=nums[i];
                i++;
            }
            ans+=j-i+1;
            j++;    
        }
        return ans;
    }
};
// @lc code=end

