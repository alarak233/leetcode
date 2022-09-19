/*
 * @lc app=leetcode.cn id=1636 lang=cpp
 *
 * [1636] 按照频率将数组升序排序
 */

// @lc code=start
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> m;
        for(auto num:nums){
            m[num]++;
        }
        sort(nums.begin(),nums.end(),[&m](int a,int b){
            return m[a]<m[b] || m[a]==m[b] && a>b;
        });
        return nums;
    }
};
// @lc code=end

