/*
 * @lc app=leetcode.cn id=1653 lang=cpp
 *
 * [1653] 使字符串平衡的最少删除次数
 */

// @lc code=start
#include<string>
#include<algorithm>
using namespace std;


class Solution {
public:
    int minimumDeletions(string s) {
        int leftb = 0, righta = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'a') {
                righta++;
            }
        }
        int res = righta;
        for (int i = 0; i < s.size(); i++) {
            char c = s[i];
            if (c == 'a') {
                righta--;
            } else {
                leftb++;
            }
            res = min(res, leftb + righta);
        }
        return res;
    }
};
// @lc code=end

