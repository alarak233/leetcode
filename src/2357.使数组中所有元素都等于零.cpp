/*
 * @lc app=leetcode.cn id=2357 lang=cpp
 *
 * [2357] 使数组中所有元素都等于零
 */

// @lc code=start
#include<vector>
#include<unordered_set>
using namespace std;

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_set<int> s;
        for(int num:nums){
            if(num!=0&&s.count(num)==0)s.emplace(num);
        }
        return s.size();
    }
};
// @lc code=end

