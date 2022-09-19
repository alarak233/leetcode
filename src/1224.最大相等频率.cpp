/*
 * @lc app=leetcode.cn id=1224 lang=cpp
 *
 * [1224] 最大相等频率
 */

// @lc code=start
#include<unordered_map>
#include<algorithm>
using namespace std;

class Solution {
public:
    int maxEqualFreq(vector<int>& nums) {
        unordered_map<int,int> cnt;
        unordered_map<int,int> freq;
        int order=1;
        int maxFreq=0;
        for(int i=0;i<nums.size();i++){
            if(cnt.count(nums[i])){
                freq[cnt[nums[i]]]--;
            }
            cnt[nums[i]]++;
            freq[cnt[nums[i]]]++;
            maxFreq=max(maxFreq,cnt[nums[i]]);
            if(maxFreq==1 || (freq[maxFreq]==1 && freq[maxFreq-1]*(maxFreq-1)+maxFreq==i+1) 
            || freq[maxFreq]*maxFreq==i){
                order=i+1;
            }
        }
        return order;
    }
};
// @lc code=end

