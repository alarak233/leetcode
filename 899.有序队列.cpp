/*
 * @lc app=leetcode.cn id=899 lang=cpp
 *
 * [899] 有序队列
 */

// @lc code=start
#include<string>
#include<algorithm>
using namespace std;

class Solution {
public:
    string orderlyQueue(string s, int k) {
        if(k>1){
            sort(s.begin(),s.end());
            return s;
        }
        else{
            string smin=s;
            for(int i=0;i<s.size()-1;i++){
                s=s.substr(1)+s[0];
                if(s<smin)smin=s;
            }
            return smin;
        }
    }
};
// @lc code=end

