/*
 * @lc app=leetcode.cn id=1464 lang=cpp
 *
 * [1464] 数组中两元素的最大乘积
 */

// @lc code=start
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max1=INT16_MIN,max2=INT32_MIN;
        for(auto num:nums){
            if(num>max1){
                max2=max1;
                max1=num;
                continue;
            }
            if(num>max2){
                max2=num;
            }
        }
        return (max1-1)*(max2-1);
    }
};
// @lc code=end

