/*
 * @lc app=leetcode.cn id=1775 lang=cpp
 *
 * [1775] 通过最少操作次数使数组的和相等
 */

// @lc code=start
#include<vector>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()>6*nums2.size()||nums1.size()*6<nums2.size())return -1;
        vector<int> cnt1(6),cnt2(6);
        int diff=0;
        for(auto& num:nums1){
            cnt1[num-1]++;
            diff+=num;
        }
        for(auto& num:nums2){
            cnt2[num-1]++;
            diff-=num;
        }
        if(diff==0)return 0;
        
        int ans=0;
        if(diff>0){            
            for(int i=0;i<5;i++){
                if(diff<=(5-i)*(cnt1[5-i]+cnt2[i])){
                    ans+=diff/(5-i)+(diff%(5-i)==0?0:1);
                    break;
                }
                else{
                    ans+=cnt1[5-i]+cnt2[i];
                    diff-=(5-i)*(cnt1[5-i]+cnt2[i]);
                }
            }
        }
        else{
            diff=-diff;
            for(int i=0;i<5;i++){
                if(diff<=(5-i)*(cnt1[i]+cnt2[5-i])){
                    ans+=diff/(5-i)+(diff%(5-i)==0?0:1);
                    break;
                }
                else{
                    ans+=cnt1[i]+cnt2[5-i];
                    diff-=(5-i)*(cnt1[i]+cnt2[5-i]);
                }
            }
        }
        return ans;
    }
};
// @lc code=end

