/*
 * @lc app=leetcode.cn id=2383 lang=cpp
 *
 * [2383] 赢得比赛需要的最少训练时长
 */

// @lc code=start
#include<vector>
#include<numeric>
#include<algorithm>
using namespace std;

class Solution {
public:
    int minNumberOfHours(int& initialEnergy, int& initialExperience, vector<int>& energy, vector<int>& experience) {
        int energy_sum=accumulate(energy.begin(),energy.end(),0);
        int ans=energy_sum<initialEnergy?0:-initialEnergy+energy_sum+1;
        int cur_exp=0;
        int exp_sum=0;
        for(auto exp:experience){
            cur_exp=max(cur_exp,exp+1);
            cur_exp+=exp;
            exp_sum+=exp;
        }
        if(initialExperience+exp_sum>cur_exp)return ans;
        return ans+cur_exp-initialExperience-exp_sum;
    }
};
// @lc code=end

