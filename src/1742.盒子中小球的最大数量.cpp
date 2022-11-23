/*
 * @lc app=leetcode.cn id=1742 lang=cpp
 *
 * [1742] 盒子中小球的最大数量
 */

// @lc code=start
class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        int num[37]={0};
        int temp=0;
        int sum=0;
        int ans=0;
        for(int i=lowLimit;i<=highLimit;i++){
            temp=i;
            sum=0;
            while(temp>0){
                sum+=temp%10;
                temp=temp/10;
            }
            num[sum]++;
            ans=ans>num[sum]?ans:num[sum];
        }
        return ans;
    }
};
// @lc code=end

