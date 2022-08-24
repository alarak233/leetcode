/*
 * @lc app=leetcode.cn id=1003 lang=cpp
 *
 * [1003] 检查替换后的词是否有效
 */

// @lc code=start
#include<string>
#include<stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        if(s.size()%3!=0)return false;
        stack<char> st;
        int numA=0,numB=0;
        for(auto i:s){
            if(i=='a'){
                numA++;
                st.push('a');
            }
            if(i=='b'){
                if(numB>=numA)return false;
                numB++;
                st.push('b');
            }
            if(i=='c'){
                if(st.size()<2)return false;
                if(st.top()!='b')return false;
                st.pop();
                if(st.top()!='a')return false;
                st.pop();                
            }
        }
        return st.empty();
    }
};
// @lc code=end

