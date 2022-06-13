/*
 * @lc app=leetcode.cn id=1051 lang=cpp
 *
 * [1051] 高度检查器
 */

// @lc code=start
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> orderHeights=heights;
        sort(orderHeights.begin(),orderHeights.end());

        int ans=0;
        for(int i=0;i<heights.size();i++){
            if(heights[i]!=orderHeights[i])ans++;
        }

        return ans;
    }
};
// @lc code=end

