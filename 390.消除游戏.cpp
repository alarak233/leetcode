// @before-stub-for-debug-begin
#include <vector>
#include <string>
//#include "commoncppproblem390.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=390 lang=cpp
 *
 * [390] 消除游戏
 */

// @lc code=start
class Solution {
public:
    int lastRemaining(int n) {
        if(n==1)return 1;
        int start=1;
        int end=n;
        int diff=1;
        while(start<end){
            start=start+diff;
            diff=diff*2;
            end=(end-start)/diff*diff+start;
            if(start==end)return start;
            end=end-diff;
            diff=diff*2;
            start=end-(end-start)/diff*diff;
        }
        return start;
    }
};
// @lc code=end

