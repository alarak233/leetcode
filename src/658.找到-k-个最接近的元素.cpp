/*
 * @lc app=leetcode.cn id=658 lang=cpp
 *
 * [658] 找到 K 个最接近的元素
 */

// @lc code=start
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int>::iterator right=lower_bound(arr.begin(),arr.end(),x);
        vector<int>::iterator left=right-1;
        while(k--){
            if(left<arr.begin()){
                right++;
                continue;
            }
            if(right==arr.end()){
                left--;
                continue;
            }
            if(*right-x<x-*left){
                right++;
            }
            else{
                left--;
            }
        }
        vector<int> ans;
        while(left<right-1){
            left++;
            ans.push_back(*left);
        }
        return ans;
    }
};
// @lc code=end

