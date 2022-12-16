/*
 * @lc app=leetcode.cn id=1785 lang=cpp
 *
 * [1785] 构成特定和需要添加的最少元素
 */

// @lc code=start
#include<vector>
using namespace std;

class Solution {
public:
    int minElements(vector<int>& nums, int limit, int goal) {
        long sum=0;
        for(auto num:nums){
            sum+=num;
        }
        int ans=abs(goal-sum)/limit;
        return ans+(ans%limit==0?0:1);
    }
};
// @lc code=end

