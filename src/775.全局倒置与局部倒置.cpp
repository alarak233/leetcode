/*
 * @lc app=leetcode.cn id=775 lang=cpp
 *
 * [775] 全局倒置与局部倒置
 */

// @lc code=start
#include<vector>
using namespace std;

class Solution {
public:
    bool isIdealPermutation(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]-i>1||nums[i]-i<-1)return false;
        }
        return true;
    }
};
// @lc code=end

