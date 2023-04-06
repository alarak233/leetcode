/*
 * @lc app=leetcode.cn id=1017 lang=cpp
 *
 * [1017] 负二进制转换
 */

// @lc code=start
#include<string>
#include<algorithm>
using namespace std;

class Solution {
public:
    string baseNeg2(int n) {
        if(n==0||n==1)return to_string(n);
        string s;
        while (n)
        {
            int a=n&1;
            s.push_back('0'+a);
            n-=a;
            n/=-2;
        }
        reverse(s.begin(),s.end());
        return s; 
    }
};
// @lc code=end

