/*
 * @lc app=leetcode.cn id=932 lang=cpp
 *
 * [932] 漂亮数组
 */

// @lc code=start
//分治法看官方才想到的
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> beautifulArray(int n)
    {
        if (n == 1)
            return {1};
        vector<int> help = beautifulArray(n / 2);
        vector<int> ans;
        for (auto i : help)
        {
            ans.push_back(i * 2);
        }

        if (n % 2 == 1)
        {
            help = beautifulArray(n / 2 + 1);
        }
        for (auto i : help)
        {
            ans.push_back(i * 2 - 1);
        }
        return ans;
    }
};
// @lc code=end
