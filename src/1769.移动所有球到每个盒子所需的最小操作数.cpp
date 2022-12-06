/*
 * @lc app=leetcode.cn id=1769 lang=cpp
 *
 * [1769] 移动所有球到每个盒子所需的最小操作数
 */

// @lc code=start
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> minOperations(string& boxes) {
        vector<int> ans(boxes.size());
        int right=0;
        for(int i=0;i<boxes.size();i++){
            if(boxes[i]=='1'){
                ans[0]+=i;
                right++;
            }
        }
        int sum=right;
        for(int i=1;i<ans.size();i++){
            if(boxes[i-1]=='1'){
                right--;
            }
            ans[i]=ans[i-1]+sum-2*right;
        }
        return ans;
    }
};
// @lc code=end

