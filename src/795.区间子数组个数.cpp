/*
 * @lc app=leetcode.cn id=795 lang=cpp
 *
 * [795] 区间子数组个数
 */

// @lc code=start
#include<vector>
using namespace std;

class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int &left, int &right) {
        int ans=0;
        int start=0;
        int smaller_start=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>right)continue;
            start=i;
            while(i<nums.size()&&nums[i]<=right){
                if(nums[i]>=left){
                    i++;
                    continue;
                }
                smaller_start=i;
                while(i<nums.size()&&nums[i]<left)i++;
                ans-=(long)(i-smaller_start)*(i-smaller_start+1)/2;
            }
            ans+=(long)(i-start)*(i-start+1)/2;
        }
        return ans;
    }
};
// @lc code=end

