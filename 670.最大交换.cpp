/*
 * @lc app=leetcode.cn id=670 lang=cpp
 *
 * [670] 最大交换
 */

// @lc code=start
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

class Solution {
public:
    int maximumSwap(int num) {
        string s=to_string(num);
        string sTemp=s;
        sort(s.begin(),s.end(),greater<char>());
        int i=0;
        for(;i<s.size();i++){
            if(s[i]!=sTemp[i])break;
        }
        if(i==s.size())return num;
        int j=sTemp.size()-1;
        for(;j>=0;j--){
            if(sTemp[j]==s[i])break;
        }
        sTemp[j]=sTemp[i];
        sTemp[i]=s[i];
        return stoi(sTemp);
    }
};
// @lc code=end

