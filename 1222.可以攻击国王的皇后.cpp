/*
 * @lc app=leetcode.cn id=1222 lang=cpp
 *
 * [1222] 可以攻击国王的皇后
 */

// @lc code=start
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    vector<vector<int>> queensAttacktheKing(vector<vector<int>> &queens, vector<int> &king)
    {
        int ip[8] = {-1, 1, 0, 0, -1, -1, 1, 1};
        int jp[8] = {0, 0, -1, 1, -1, 1, -1, 1};
        vector<vector<bool>> q(8, vector<bool>(8, false));
        vector<vector<int>> res;
        for (int i = 0; i < queens.size(); i++)
            q[queens[i][0]][queens[i][1]] = true;
        for (int i = 0; i < 8; i++)
        {
            int x = king[0] + ip[i];
            int y = king[1] + jp[i];
            while (x >= 0 && y >= 0 && x < 8 && y < 8)
            {
                if (q[x][y])
                {
                    res.push_back({x, y});
                    break;
                }
                x += ip[i];
                y += jp[i];
            }
        }
        return res;
    }
};
// @lc code=end
