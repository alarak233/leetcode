/*
 * @lc app=leetcode.cn id=672 lang=cpp
 *
 * [672] 灯泡开关 Ⅱ
 */

// @lc code=start
class Solution {
public:
    int flipLights(int n, int presses) {
        switch (n)
        {
        case 0:
            return 1;
        case 1:
            return presses>0?2:1;
        case 2:
            return presses>0?presses>1?4:3:1;        
        default:
            return presses>0?presses>1?presses>2?8:7:4:1;
        }
    }
};
// @lc code=end

