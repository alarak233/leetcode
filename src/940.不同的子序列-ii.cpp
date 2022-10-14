/*
 * @lc app=leetcode.cn id=940 lang=cpp
 *
 * [940] 不同的子序列 II
 */

// @lc code=start
#include <string>
#include <vector>
#include <numeric>
using namespace std;

class Solution
{
public:
    int distinctSubseqII(string s)
    {
        int mod = 1000000007;
        vector<long> v(26, 0);
        for (auto c : s)
        {
            int t = 1;
            for (auto i : v)
            {
                t = (t + i) % mod;
            }
            v[c - 'a'] = t;
        }
        int t = 0;
        for (auto i : v)
        {
            t = (t + i) % mod;
        }
        return t;
    }
};
// @lc code=end
