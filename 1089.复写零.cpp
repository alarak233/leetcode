/*
 * @lc app=leetcode.cn id=1089 lang=cpp
 *
 * [1089] 复写零
 */

// @lc code=start
#include<vector>
using namespace std;

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int zeroNum =0;
        for(auto i:arr){
            if(i==0)zeroNum++;
        }

        int len=arr.size();

        arr.resize(arr.size()+zeroNum,0);

        for(int i=arr.size()-1-zeroNum;i>=0;i--){
            if(arr[i]!=0){
                arr[i+zeroNum]=arr[i];
            }
            else{
                arr[i+zeroNum]=0;
                zeroNum--;
                arr[i+zeroNum]=0;
            }
        }

        arr.resize(len);
    }
};
// @lc code=end

