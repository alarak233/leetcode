/*
 * @lc app=leetcode.cn id=2283 lang=cpp
 *
 * [2283] 判断一个数的数字计数是否等于数位的值
 */

// @lc code=start
#include<string>
using namespace std;

class Solution {
public:
    bool digitCount(string num) {
        int nums[10]={0};
        for(auto c:num){
            nums[c-'0']++;
        }
        for(int i=0;i<num.size();i++){
            if(nums[i]!=(num[i]-'0'))return false;
        }
        return true;
    }
};
// @lc code=end

