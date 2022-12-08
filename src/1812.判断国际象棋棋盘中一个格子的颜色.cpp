/*
 * @lc app=leetcode.cn id=1812 lang=cpp
 *
 * [1812] 判断国际象棋棋盘中一个格子的颜色
 */

// @lc code=start
#include<string>
using namespace std;

class Solution {
public:
    bool squareIsWhite(string& coordinates) {
        return ((coordinates[0]-'a')%2==0)^((coordinates[1]-'1')%2==0);
    }
};
// @lc code=end

