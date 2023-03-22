/*
 * @lc app=leetcode.cn id=1626 lang=cpp
 *
 * [1626] 无矛盾的最佳球队
 */

// @lc code=start
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        vector<pair<int,int>> ps;
        for(int i=0;i<scores.size();i++){
            ps.push_back({scores[i],ages[i]});
        }

        sort(ps.begin(),ps.end());
        vector<int> t;
        int ans=0;
        for(int i=0;i<ps.size();i++){
            int cur=ps[i].first;
            for(int j=0;j<i;j++){
                if(ps[i].second>=ps[j].second)cur=max(cur,t[j]+ps[i].first);
            }
            ans=max(ans,cur);
            t.push_back(cur);
        }

        return ans;
    }
};
// @lc code=end

