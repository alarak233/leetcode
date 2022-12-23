/*
 * @lc app=leetcode.cn id=2011 lang=cpp
 *
 * [2011] 执行操作后的变量值
 */

// @lc code=start
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans=0;
        for(auto& operation:operations){
            if(operation[1]=='+')
                ans++;
            else
                ans--;
        }
        return ans;
    }
};
// @lc code=end

