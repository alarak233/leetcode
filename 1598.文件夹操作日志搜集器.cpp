/*
 * @lc app=leetcode.cn id=1598 lang=cpp
 *
 * [1598] 文件夹操作日志搜集器
 */

// @lc code=start
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    int minOperations(vector<string>& logs) {
        int ans=0;
        for(auto log:logs){
            if(log=="./")continue;
            if(log=="../"){
                if(ans>0)ans--;
            }
            else
                ans++;
        }
        return ans;
    }
};
// @lc code=end

