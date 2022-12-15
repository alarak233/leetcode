/*
 * @lc app=leetcode.cn id=1945 lang=cpp
 *
 * [1945] 字符串转化后的各位数字之和
 */

// @lc code=start
#include<string>
using namespace std;

class Solution {
public:
    int getLucky(string& s, int k) {
        string a0="";
        for(auto c:s){
            a0+=to_string(c-'a'+1);
        }
        int ans=0;
        for(int i=0;i<k;i++){
            ans=0;
            for(auto c:a0){
                ans+=c-'0';
            }
            a0=to_string(ans);
        }
        return ans;
    }
};
// @lc code=end

