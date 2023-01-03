/*
 * @lc app=leetcode.cn id=2042 lang=cpp
 *
 * [2042] 检查句子中的数字是否递增
 */

// @lc code=start
#include<string>
using namespace std;

class Solution {
public:
    bool areNumbersAscending(string s) {
        int temp=0;
        for(int i=0;i<s.size();i++){
            if(!isdigit(s[i]))continue;
            int cur=i;
            string s_temp="";
            while(isdigit(s[i])){
                s_temp=s_temp+s[i];
                i++;
            }
            if(stoi(s_temp)<=temp)return false;
            temp=stoi(s_temp);
        }
        return true;
    }
};
// @lc code=end

