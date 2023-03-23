/*
 * @lc app=leetcode.cn id=1630 lang=cpp
 *
 * [1630] 等差子数组
 */

// @lc code=start
#include<vector>
#include<algorithm>
#include<unordered_set>
using namespace std;

class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> ans;
        for(int i=0;i<l.size();i++){
            ans.push_back(help(nums,l[i],r[i]));
        }
        return ans;
    }

    bool help(vector<int>& nums,int start,int end){
        if(end-start<2)return true;
        int max_n=nums[start];
        int min_n=nums[start];
        for(int i=start;i<=end;i++){
            max_n=max(max_n,nums[i]);
            min_n=min(min_n,nums[i]);
        }
        if(max_n==min_n)return true;
        if((max_n-min_n)%(end-start)!=0)return false;

        int d=(max_n-min_n)/(end-start);
        unordered_set<int> s;
        for(int i=start;i<=end;i++){
            if(s.count(nums[i])>0)return false;
            if((nums[i]-min_n)%d!=0)return false;
            s.emplace(nums[i]);
        }
        return true;
    }
};
// @lc code=end

