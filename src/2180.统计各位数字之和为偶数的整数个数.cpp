/*
 * @lc app=leetcode.cn id=2180 lang=cpp
 *
 * [2180] 统计各位数字之和为偶数的整数个数
 */

// @lc code=start
class Solution {
public:
    int countEven(int num) {
        int y = num / 10, x = num % 10;
        int res = y * 5, ySum = 0;
        while (y) {
            ySum += y % 10;
            y /= 10;
        }
        if (ySum % 2 == 0) {
            res += x / 2 + 1;
        } else {
            res += (x + 1) / 2;
        }
        return res - 1;
    }
};
// @lc code=end

