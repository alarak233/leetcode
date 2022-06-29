/*
 * @lc app=leetcode.cn id=1354 lang=cpp
 *
 * [1354] 多次求和构造目标数组
 */

// @lc code=start
#include<queue>
using namespace std;

class Solution {
public:
    bool isPossible(vector<int>& target) {
        if(target.size()==1)return target[0]==1;
        priority_queue<int> q;
        long long sum=0;
        for(auto i:target){
            q.push(i);
            sum+=i;
        }
        while(q.top()>1){
            int maxT=q.top();
            q.pop();
            sum-=maxT;
            if(sum==1)return true;
            if(sum>=maxT)return false;
            maxT=maxT%sum;
            if(maxT==0)return false;
            sum+=maxT;
            q.push(maxT);
        }
        return q.top()==1;
    }
};
// @lc code=end

