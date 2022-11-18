/*
 * @lc app=leetcode.cn id=891 lang=cpp
 *
 * [891] 子序列宽度之和
 */

// @lc code=start
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int sumSubseqWidths(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        long long res = 0, mod = 1e9 + 7;
        long long x = nums[0], y = 2;
        for (int j = 1; j < nums.size(); j++) {
            res = (res + nums[j] * (y - 1) - x) % mod;
            x = (x * 2 + nums[j]) % mod;
            y = y * 2 % mod;
        }
        return (res + mod) % mod;
    }
};
// @lc code=end

