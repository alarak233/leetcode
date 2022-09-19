/*
 * @lc app=leetcode.cn id=274 lang=cpp
 *
 * [274] H 指数
 */

// @lc code=start
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
        for(int i=citations.size();i>0;i--){
            if(citations[citations.size()-i]>=i)return i;
        }
        return 0;
    }
};
// @lc code=end

