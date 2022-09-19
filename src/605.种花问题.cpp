/*
 * @lc app=leetcode.cn id=605 lang=cpp
 *
 * [605] 种花问题
 */

// @lc code=start
#include<vector>
using namespace std;
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int alow=0;
        int f1=-2;
        for(int i=0;i<flowerbed.size()-1;i++){
            if(flowerbed[i]==1){
                alow+=(i-f1-2)/2;
                f1=i;
            }
        }
        if(flowerbed[flowerbed.size()-1]==0)alow+=(flowerbed.size()-f1-1)/2;
        else alow+=(flowerbed.size()-f1-3)/2;
        return alow>=n;    
    }
};
// @lc code=end

