/*
 * @lc app=leetcode.cn id=2287 lang=cpp
 *
 * [2287] 重排字符形成目标字符串
 */

// @lc code=start
#include<string>
#include<unordered_map>
#include<algorithm>
using namespace std;

class Solution {
public:
    int rearrangeCharacters(string& s, string& target) {
        unordered_map<char,int> m;
        unordered_map<char,int> n;
        for(auto& c:target){
            m[c]=0;
            n[c]++;
        }
        for(auto& c:s){
            if(m.count(c)>0)m[c]++;
        }
        int ans=m.begin()->second;
        for(auto& v:m){
            ans=min(v.second/n[v.first],ans);
        }
        return ans;
    }
};
// @lc code=end

