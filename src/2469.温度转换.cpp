/*
 * @lc app=leetcode.cn id=2469 lang=cpp
 *
 * [2469] 温度转换
 */

// @lc code=start
#include<vector>
using namespace std;

class Solution {
public:
    vector<double> convertTemperature(double &celsius) {
        return vector<double>({celsius+273.15,celsius*1.8+32});
    }
};
// @lc code=end

