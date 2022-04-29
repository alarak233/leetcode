/*
 * @lc app=leetcode.cn id=313 lang=cpp
 *
 * [313] 超级丑数
 */

// @lc code=start
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        vector<long> dp(n + 1);
        int m = primes.size();
        vector<int> pt(m, 0);
        vector<long> nums(m, 1);
        for (int i = 1; i <= n; i++) {
            long minNum = INT_MAX;
            for (int j = 0; j < m; j++) {
                minNum = min(minNum, nums[j]);
            }
            dp[i] = minNum;
            for (int j = 0; j < m; j++) {
                if (nums[j] == minNum) {
                    pt[j]++;
                    nums[j] = dp[pt[j]] * primes[j];
                }
            }
        }
        return dp[n];
    }
};
