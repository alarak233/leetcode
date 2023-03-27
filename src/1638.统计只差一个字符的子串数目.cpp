/*
 * @lc app=leetcode.cn id=1638 lang=cpp
 *
 * [1638] 统计只差一个字符的子串数目
 */

// @lc code=start
#include<string>
#include<vector>
using namespace std;

class Solution {
public:
    int countSubstrings(string s, string t) {
        int m=s.size(),n=t.size();
        vector<vector<int>> l(m+1,vector<int>(n+1));
        vector<vector<int>> r(m+1,vector<int>(n+1));
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                l[i][j]=s[i-1]==t[j-1]?(l[i-1][j-1]+1):0;
            }
        }        
        for(int i=m;i>0;i--){
            for(int j=n;j>0;j--){
                r[i-1][j-1]=s[i-1]==t[j-1]?(r[i][j]+1):0;
            }
        }
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(s[i]!=t[j]){
                    ans+=(l[i][j]+1)*(r[i+1][j+1]+1);
                }
            }
        } 
        return ans;
    }
};
// @lc code=end

