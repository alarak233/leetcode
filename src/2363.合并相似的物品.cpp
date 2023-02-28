/*
 * @lc app=leetcode.cn id=2363 lang=cpp
 *
 * [2363] 合并相似的物品
 */

// @lc code=start
#include<vector>
#include<map>
using namespace std;

class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        map<int,int> m;
        for(vector<int> v:items1){
            m[v[0]]+=v[1];
        }
        for(vector<int> v:items2){
            m[v[0]]+=v[1];
        }
        vector<vector<int>> ans;
        for(auto p:m){
            ans.push_back({p.first,p.second});
        }
        return ans;
    }
};
// @lc code=end

