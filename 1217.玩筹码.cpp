/*
 * @lc app=leetcode.cn id=1217 lang=cpp
 *
 * [1217] 玩筹码
 */

// @lc code=start
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int sum1=0;
        int sum2=0;
        for(int i=0;i<position.size();i++){
            if(position[i]%2==0)sum1++;else sum2++;
        }
        return min(sum1,sum2);
    }
};
// @lc code=end

