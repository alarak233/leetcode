/*
 * @lc app=leetcode.cn id=1637 lang=cpp
 *
 * [1637] 两点之间不包含任何点的最宽垂直面积
 */

// @lc code=start
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int> v;
        for(auto p:points){
            v.push_back(p[0]);
        }
        sort(v.begin(),v.end());
        int ans=0;
        for(int i=1;i<v.size();i++){
            ans=max(ans,v[i]-v[i-1]);
        }
        return ans;
    }
};
// @lc code=end

