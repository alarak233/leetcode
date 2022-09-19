/*
 * @lc app=leetcode.cn id=875 lang=cpp
 *
 * [875] 爱吃香蕉的珂珂
 */

// @lc code=start
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=0;
        for(auto i:piles)high=max(high,i);

        int ans=high;
        while(low<high){
            int speed=(low+high)/2;
            long time=getTime(piles,speed);
            if(time<=h){
                ans=speed;
                high=speed;
            }
            else{
                low=speed+1;
            }
        }
        return ans;
    }

    long getTime(vector<int>& piles,int speed){
        int time=0;
        for(auto i:piles){
            time+=(i+speed-1)/speed;
        }
        return time;
    }
};
// @lc code=end

