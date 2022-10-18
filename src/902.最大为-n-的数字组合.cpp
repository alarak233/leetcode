// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem902.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=902 lang=cpp
 *
 * [902] 最大为 N 的数字组合
 */

// @lc code=start
#include<vector>
#include<string>
#include<cmath>
using namespace std;

class Solution {
public:
    int atMostNGivenDigitSet(vector<string>& digits, int n) {
        string s = to_string(n);
        int m = digits.size(), k = s.size();
        vector<int> bits;
        bool isLimit = true;
        for (int i = 0; i < k; i++) {
            if (!isLimit) {
                bits.emplace_back(m - 1);
            } else {
                int selectIndex = -1;
                for (int j = 0; j < m; j++) {
                    if (digits[j][0] <= s[i]) {
                        selectIndex = j;
                    } else {
                        break;
                    }
                }
                if (selectIndex >= 0) {
                    bits.emplace_back(selectIndex);
                    if (digits[selectIndex][0] < s[i]) {
                        isLimit = false;
                    }
                } else {
                    int len = bits.size();
                    while (!bits.empty() && bits.back() == 0) {
                        bits.pop_back();
                    }
                    if (!bits.empty()) {
                        bits.back() -= 1;
                    } else {
                        len--;
                    }
                    while ((int)bits.size() <= len) {
                        bits.emplace_back(m - 1);
                    }
                    isLimit = false;
                }
            }
        }
        int ans = 0;
        for (int i = 0; i < bits.size(); i++) {
            ans = ans * m + (bits[i] + 1);
        }
        return ans;
    }
};
// @lc code=end

