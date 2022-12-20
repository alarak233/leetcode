/*
 * @lc app=leetcode.cn id=1760 lang=cpp
 *
 * [1760] 袋子里最少数目的球
 */

// @lc code=start
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int minimumSize(vector<int>& nums, int maxOperations) {
        int left=1;
        int right=0;
        for(auto num:nums){
            right=max(right,num);
        }
        int ans=0;

        while (left<=right)
        {
            int middle=(left+right)/2;
            long long cnt=0;
            for(auto num:nums){
                cnt+=(num-1)/middle;
            }
            if(cnt<=maxOperations){
                right=middle-1;
                ans=middle;
            }
            else{
                left=middle+1;
            }
        }
        return ans;        
    }
};
// @lc code=end

