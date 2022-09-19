/*
 * @lc app=leetcode.cn id=1200 lang=cpp
 *
 * [1200] 最小绝对差
 */

// @lc code=start
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int minDiff=INT_MAX;
        vector<vector<int>> ans;
        for(int i=1;i<arr.size();i++){
            if(arr[i]-arr[i-1]<minDiff){
                minDiff=arr[i]-arr[i-1];
                ans.clear();
                ans.push_back({arr[i-1],arr[i]});
            }
            else if(arr[i]-arr[i-1]==minDiff){
                ans.push_back({arr[i-1],arr[i]});
            }
        }
        return ans;
    }
};
// @lc code=end

