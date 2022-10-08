/*
 * @lc app=leetcode.cn id=870 lang=cpp
 *
 * [870] 优势洗牌
 */

// @lc code=start
#include<vector>
#include<numeric>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<int> advantageCount(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        vector<int> sub1(n);
        vector<int> sub2(n);
        iota(sub1.begin(),sub1.end(),0);
        iota(sub2.begin(),sub2.end(),0);
        sort(sub1.begin(),sub1.end(),[&nums1](int a,int b){
            return nums1[a]<nums1[b];
        });
        sort(sub2.begin(),sub2.end(),[&nums2](int a,int b){
            return nums2[a]<nums2[b];
        });
        int left=0;
        int right=n-1;
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            if(nums1[sub1[i]]>nums2[sub2[left]]){
                ans[sub2[left]]=nums1[sub1[i]];
                left++;
            }
            else{
                ans[sub2[right]]=nums1[sub1[i]];
                right--;
            }
        }
        return ans;
    }
};
// @lc code=end

