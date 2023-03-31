/*
 * @lc app=leetcode.cn id=2367 lang=cpp
 *
 * [2367] 算术三元组的数目
 */

// @lc code=start
#include<vector>
#include<unordered_set>
using namespace std;

class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        unordered_set<int> s;
        int ans=0;
        for(int num:nums){
            s.emplace(num);
            if(s.count(num-diff)>0&&s.count(num-diff*2)>0)
                ans++;
        }
        return ans;
    }
};
// @lc code=end

