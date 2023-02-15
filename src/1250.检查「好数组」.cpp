/*
 * @lc app=leetcode.cn id=1250 lang=cpp
 *
 * [1250] 检查「好数组」
 */

// @lc code=start
#include<vector>
#include<numeric>
using namespace std;

class Solution {
public:
    bool isGoodArray(vector<int>& nums) {
        int d=nums[0];
        for(int num:nums){
            d=gcd(num,d);
        }
        return d==1;
    }
};
// @lc code=end

