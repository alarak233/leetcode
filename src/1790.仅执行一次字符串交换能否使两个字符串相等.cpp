/*
 * @lc app=leetcode.cn id=1790 lang=cpp
 *
 * [1790] 仅执行一次字符串交换能否使两个字符串相等
 */

// @lc code=start
#include<string>
using namespace std;

class Solution {
public:
    bool areAlmostEqual(string& s1, string& s2) {
        int cnt=0;
        int diff[2]={-1,-1};
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s2[i]){
                if(cnt>1)return false;
                diff[cnt]=i;
                cnt++;
            }
        }
        switch (cnt)
        {
        case 0:
            return true;
            break;
        case 1:
            return false;
            break;
        default:
            return s1[diff[0]]==s2[diff[1]] && s1[diff[1]]==s2[diff[0]];
            break;
        }
    }
};
// @lc code=end

