/*
 * @lc app=leetcode.cn id=856 lang=cpp
 *
 * [856] 括号的分数
 */

// @lc code=start
#include<string>
using namespace std;

class Solution {
public:
    int scoreOfParentheses(string& s) {
        return help(s,0,s.size()-1);
    }

    int help(string& s,int a,int b){
        if(b-a==1)return 1;
        int ans=0;
        int is=0;
        int start=a;
        for(int i=a;i<=b;i++){
            if(s[i]=='(')
                is++;
            else
                is--;
            if(is==0){
                if(i-start==1)
                    ans++;
                else
                    ans+=2*help(s,start+1,i-1);
                start=i+1;
            }
        }
        return ans;
    }
};
// @lc code=end

