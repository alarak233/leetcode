/*
 * @lc app=leetcode.cn id=11 lang=cpp
 *
 * [11] 盛最多水的容器
 */

// @lc code=start
#include<vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int ans=min(height[left],height[right])*(right-left);
        while(left<right){
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
            ans=max(min(height[left],height[right])*(right-left),ans);
        }
        return ans;
    }
};
// @lc code=end

