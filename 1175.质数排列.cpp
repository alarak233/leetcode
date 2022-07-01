/*
 * @lc app=leetcode.cn id=1175 lang=cpp
 *
 * [1175] 质数排列
 */

// @lc code=start
#include<vector>
using namespace std;

class Solution {
public:
    int numPrimeArrangements(int n) {
        if(n==1)return 1;
        vector<bool> v(n,true);
        v[0]=false;
        for(int i=2;i<n+1;i++){
            if(v[i-1]){
                for(int j=2;j*i<n+1;j++)v[j*i-1]=false;
            }
        }
        int num=0;
        for(int i=0;i<n;i++)if(v[i])num++;
        long long ans=1;
        for(int i=2;i<n-num+1;i++){
            ans*=i;
            ans=ans%((long long)(1e9+7));
        }
        for(int i=2;i<num+1;i++){
            ans*=i;
            ans=ans%((long long)(1e9+7));
        }
        return ans;        
    }
};
// @lc code=end

