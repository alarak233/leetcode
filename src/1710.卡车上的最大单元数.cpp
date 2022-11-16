/*
 * @lc app=leetcode.cn id=1710 lang=cpp
 *
 * [1710] 卡车上的最大单元数
 */

// @lc code=start
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),[](vector<int> &a,vector<int> &b)->bool{
            return a[1]>b[1];
        });
        int ans=0;
        int cnt=0;
        for(int i=0;i<boxTypes.size();i++){
            if(cnt>=truckSize)return ans;
            ans+=min(boxTypes[i][0],truckSize-cnt)*boxTypes[i][1];
            cnt+=boxTypes[i][0];            
        }
        return ans;
    }
};
// @lc code=end

