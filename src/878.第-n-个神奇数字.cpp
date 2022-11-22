/*
 * @lc app=leetcode.cn id=878 lang=cpp
 *
 * [878] 第 N 个神奇数字
 */

// @lc code=start
#include<numeric>
#include<algorithm>
using namespace std;

class Solution {
public:
    int nthMagicalNumber(int n, int a, int b) {
        int c=lcm(a,b);
        int c_num=c/a+c/b-1;
        int r=n%c_num;
        const int mod = (int)1e9+7;
        long long ans=(long long)c*(n/c_num) %mod;
        if(r==0)return ans;
        int add_a=a;
        int add_b=b;
        while(r-1>0){
            if(add_a<add_b)add_a+=a;else add_b+=b;
            r--;
        }
        return (int)(ans+min(add_a,add_b)%mod)%mod;
    }
};
// @lc code=end

