/*
 * @lc app=leetcode.cn id=9 lang=cpp
 *
 * [9] 回文数
 */

// @lc code=start
#include<string>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        if(x<10)return true;
        string s=to_string(x);
        int len=s.size();
        for(int i=0;i<(len+1)/2;i++){
            if(s[i]!=s[len-i-1])return false;
        }

        return true;
    }
};
// @lc code=end

