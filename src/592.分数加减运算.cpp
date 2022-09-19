/*
 * @lc app=leetcode.cn id=592 lang=cpp
 *
 * [592] 分数加减运算
 */

// @lc code=start
#include<string>
#include<numeric>
using namespace std;

class Solution {
public:
    string fractionAddition(string expression) {
        int expreLen=expression.size();
        int i=0;
        long long ans1=0;
        long long ans2=1;
        while(i<expreLen){
            int sign=1;

            //取符号
            if(expression[i]=='+' || expression[i] =='-'){
                sign=(expression[i]=='+')?1:-1;
                i++;
            }

            //取分子
            long long temp1=0;
            while(i<expreLen && expression[i]!='/'){
                temp1*=10;
                temp1+=expression[i]-'0';
                i++;
            }
            i++;

            //取分母
            long long temp2=0;
            while(i<expreLen && expression[i]!='+' && expression[i]!='-'){
                temp2*=10;
                temp2+=expression[i]-'0';
                i++;
            }
            
            ans1=ans1*temp2+sign*ans2*temp1;
            ans2=ans2*temp2;

            long long g=gcd(abs(ans1),ans2);
            ans1/=g;
            ans2/=g;
        }

        if(ans1==0)return "0/1";
        string ans="";
        ans=ans+to_string(ans1)+'/'+to_string(ans2);
        return ans;
    }
};
// @lc code=end

