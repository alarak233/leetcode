/*
 * @lc app=leetcode.cn id=1640 lang=cpp
 *
 * [1640] 能否连接形成数组
 */

// @lc code=start
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        unordered_map<int,int> m;
        for(int i=0;i<pieces.size();i++){
            m[pieces[i][0]]=i;
        }
        for(int i=0;i<arr.size();){
            if(m.count(arr[i])==0||m[arr[i]]==-1)
                return false;
            for(int j=1;j<pieces[m[arr[i]]].size();j++){
                if(arr[i+j]!=pieces[m[arr[i]]][j])
                    return false;
            }
            int temp=m[arr[i]];
            m[arr[i]]=-1;
            i=i+pieces[temp].size();
        }
        return true;
    }
};
// @lc code=end

