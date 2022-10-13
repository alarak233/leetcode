/*
 * @lc app=leetcode.cn id=769 lang=cpp
 *
 * [769] 最多能完成排序的块
 */

// @lc code=start
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        unordered_map<int,int> m;
        for(int i=0;i<arr.size();i++){
            m[arr[i]]=i;
        }

        vector<int> temp=arr;
        int ans=0;
        sort(temp.begin(),temp.end());//数组只包含1到n-1，可不用排序
        for(int i=0;i<arr.size();i++){
            int max_index=m[temp[i]];
            while(i<max_index){
                i++;
                max_index=max(max_index,temp[m[i]]);
            }
            ans++;
        }
        return ans;
    }
};
// @lc code=end

