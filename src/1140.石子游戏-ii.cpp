/*
 * @lc app=leetcode.cn id=1140 lang=cpp
 *
 * [1140] 石子游戏 II
 */

// @lc code=start
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int memo[110][200];
    int p[110], n;
    int dfs(int idx, int m) {
        if (idx == n) {
            return 0;
        }
        if (memo[idx][m] != -1) {
            return memo[idx][m];
        }
        int ret = -(1 << 30);
        for (int i = idx; i < n; ++i) {
            if (i - idx + 1 <= 2 * m) {
                ret = max(ret, p[i + 1] - p[idx] - dfs(i + 1, max(m, i - idx + 1)));
            }
        }
        memo[idx][m] = ret;
        return ret;
    }
    
    int stoneGameII(vector<int>& piles) {
        n = piles.size();
        memset(memo, -1, sizeof memo);
        for (int i = 1; i <= n; ++i) {
            p[i] = p[i - 1] + piles[i - 1];
        }
        int delta = dfs(0, 1);
        return (p[n] - delta) / 2 + delta;
    }   
};
// @lc code=end

