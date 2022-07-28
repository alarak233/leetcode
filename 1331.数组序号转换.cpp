/*
 * @lc app=leetcode.cn id=1331 lang=cpp
 *
 * [1331] 数组序号转换
 */

// @lc code=start
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        if(arr.empty())return {};
        vector<int> orderedArr=arr;
        sort(orderedArr.begin(),orderedArr.end());
        unordered_map<int,int> m;
        m[orderedArr[0]]=1;
        int order=2;
        for(int i=1;i<orderedArr.size();i++){
            if(orderedArr[i]!=orderedArr[i-1]){
                m[orderedArr[i]]=order;
                order++;
            }
        }
        vector<int> ans;
        for(auto i:arr){
            ans.push_back(m[i]);
        }
        return ans;
    }
};
// @lc code=end

