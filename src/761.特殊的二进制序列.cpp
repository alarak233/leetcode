/*
 * @lc app=leetcode.cn id=761 lang=cpp
 *
 * [761] 特殊的二进制序列
 */

// @lc code=start
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    string makeLargestSpecial(string s) {
        if(s.size()<=2)return s;

        int cnt=0;
        int left=0;
        vector<string> vs;

        for(int i=0;i<s.size();i++){
            if(s[i]=='1')
                cnt++;
            else{
                cnt--;
                if(cnt==0){
                    vs.push_back('1'+makeLargestSpecial(s.substr(left+1,i-left-1))+'0');
                    left=i+1;
                }
            }
        }

        sort(vs.begin(),vs.end(),greater<string>{});
        string ans="";
        for(auto i:vs){
            ans+=i;
        }
        return ans;
    }
};
// @lc code=end

