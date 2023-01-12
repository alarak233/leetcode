/*
 * @lc app=leetcode.cn id=1807 lang=cpp
 *
 * [1807] 替换字符串中的括号内容
 */

// @lc code=start
#include<string>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    string evaluate(string& s, vector<vector<string>>& knowledge) {
        unordered_map<string,string> m;
        for(auto& k:knowledge){
            m[k[0]]=k[1];
        }

        string ans="";
        for(int i=0;i<s.size();i++){
            if(s[i]!='('){
                ans+=s[i];
                continue;
            }

            i++;
            string temp="";
            while(s[i]!=')'){
                temp+=s[i];
                i++;
            }

            if(m.count(temp)==0)
                ans+='?';
            else
                ans+=m[temp];
        }
        
        return ans;
    }
};
// @lc code=end

