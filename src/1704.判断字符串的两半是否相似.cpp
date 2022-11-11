/*
 * @lc app=leetcode.cn id=1704 lang=cpp
 *
 * [1704] 判断字符串的两半是否相似
 */

// @lc code=start
#include<string>
#include<unordered_set>
using namespace std;

class Solution {
public:
    bool halvesAreAlike(string& s) {
        unordered_set<char> cs{'a','e','i','o','u','A','E','I','O','U'};
        int half_len=s.size()/2;
        int cnt=0;
        for(int i=0;i<half_len;i++){
            if(cs.count(s[i])>0)cnt++;
        }
        for(int i=half_len;i<half_len*2;i++){
            if(cs.count(s[i])>0)cnt--;
            if(cnt<0)return false;
        }
        return cnt==0;
    }
};
// @lc code=end

