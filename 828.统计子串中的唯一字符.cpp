// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem828.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=828 lang=cpp
 *
 * [828] 统计子串中的唯一字符
 */

// @lc code=start
#include<string>
#include<unordered_map>
#include<vector>
using namespace std;

class Solution {
public:
    int uniqueLetterString(string s) {
        int ans=0;
        unordered_map<char,vector<int>> m;
        for(int i=0;i<s.size();i++){
            m[s[i]].push_back(i);
        }
        for(auto k:m){
            for(int i=0;i<k.second.size();i++){
                int pre=-1;
                if(i-1>=0)pre=k.second[i-1];
                int nex=s.size();
                if(i+1<k.second.size())nex=k.second[i+1];
                ans+=(k.second[i]-pre)*(nex-k.second[i]);
            }
        }   
        return ans;     
    }
};
// @lc code=end

