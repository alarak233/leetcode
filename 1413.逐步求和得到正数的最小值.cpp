/*
 * @lc app=leetcode.cn id=1413 lang=cpp
 *
 * [1413] 逐步求和得到正数的最小值
 */

// @lc code=start
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int sum=0;
        int minS=0;
        for(auto i:nums){
            sum+=i;
            minS=min(minS,sum);
        }
        return -minS+1;
    }
};
// @lc code=end

