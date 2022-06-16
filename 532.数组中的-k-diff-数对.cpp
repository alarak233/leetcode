/*
 * @lc app=leetcode.cn id=532 lang=cpp
 *
 * [532] 数组中的 k-diff 数对
 */

// @lc code=start
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            if(m.count(nums[i])==0){
                m[nums[i]]=1;
            }
            else{
                m[nums[i]]++;
            }
        }

        int ans=0;

        if(k==0){
            for(auto i:m){
                if(i.second>1)ans++;
            }
            return ans;
        }

        for(auto& i:m){
            if(m.count(i.first+k)!=0&&m[i.first+k]>0){
                ans++;
                i.second=0;
            }
            if(m.count(i.first-k)!=0&&m[i.first-k]>0){
                ans++;
                i.second=0;
            }
        }

        return ans;        
    }
};
// @lc code=end

