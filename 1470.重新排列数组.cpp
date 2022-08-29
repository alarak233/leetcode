/*
 * @lc app=leetcode.cn id=1470 lang=cpp
 *
 * [1470] 重新排列数组
 */

// @lc code=start
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        int len=n*2;
        for(int i=0;i<len;i++){
            if(i%2==0){
                ans.push_back(nums[i/2]);
            }
            else{
                ans.push_back(nums[n+(i-1)/2]);
            }
        }
        return ans;
    }
};
// @lc code=end

