/*
 * @lc app=leetcode.cn id=397 lang=cpp
 *
 * [397] 整数替换
 */

// @lc code=start
class Solution {
public:
    int integerReplacement(int n) {
        int ans=0;
        while(n>1){
            if(n%2==0){
                n/=2;
                ans++;
            }
            else if(n%4==1){
                n=(n-1)/2;
                ans+=2;
            }
            else{
                if (n==3)
                {
                    n=1;
                    ans+=2;
                }
                else{
                    n=n/2+1;
                    ans+=2;    
                }   
            }
        }
        return ans;
    }
};
// @lc code=end

