/*
 * @lc app=leetcode.cn id=953 lang=cpp
 *
 * [953] 验证外星语词典
 */

// @lc code=start
#include <vector>
#include <unordered_map>
#include <string>
#include <algorithm>
using namespace std;
class Solution
{
public:
    bool isAlienSorted(vector<string> &words, string order)
    {
        unordered_map<char, int> m;
        for (int i = 0; i < order.size(); i++)
        {
            m[order[i]] = i;
        }
        for (int i = 1; i < words.size(); i++)
        {
            int len = min(words[i - 1].size(), words[i].size());
            int j = 0;
            while (j < len && words[i - 1][j] == words[i][j])
            {
                j++;
            }
            if (j < len)
            {
                if (m[words[i - 1][j]] > m[words[i][j]])
                    return false;
            }
            else
            {
                if (words[i - 1].size() > words[i].size())
                    return false;
            }
        }
        return true;
    }
};
// @lc code=end
