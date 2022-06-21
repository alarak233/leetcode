/*
 * @lc app=leetcode.cn id=1108 lang=cpp
 *
 * [1108] IP 地址无效化
 */

// @lc code=start
#include<string>
using namespace std;

class Solution {
public:
    string defangIPaddr(string& address) {
        string ans="";
        for(auto i:address){
            if(i=='.'){
                ans+="[.]";
            }
            else{
                ans+=i;
            }
        }
        return ans;
    }
};
// @lc code=end

