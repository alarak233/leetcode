/*
 * @lc app=leetcode.cn id=467 lang=cpp
 *
 * [467] 环绕字符串中唯一的子字符串
 */

// @lc code=start
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int findSubstringInWraproundString(string& p) {
        int len=1;
        vector<int> charLen(26,0);
        charLen[p[0]-'a']=1;
        for(int i=1;i<p.size();i++){
            if(p[i]-p[i-1]==1||(p[i]=='a'&&p[i-1]=='z')){
                len++;
            }
            else{
                len=1;
            }
            charLen[p[i]-'a']=max(len,charLen[p[i]-'a']);
        }
        len=0;
        for(auto i:charLen)len+=i;
        return len;
    }
};
// @lc code=end

