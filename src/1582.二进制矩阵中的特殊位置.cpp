/*
 * @lc app=leetcode.cn id=1582 lang=cpp
 *
 * [1582] 二进制矩阵中的特殊位置
 */

// @lc code=start
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        unordered_map<int,vector<int>> row,col;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==1){
                    row[i].push_back(j);
                    col[j].push_back(i);
                }
            }
        }
        int ans=0;
        for(auto i:row){
            if(i.second.size()==1&&col[i.second[0]].size()==1)ans++;
        }
        return ans;
    }
};
// @lc code=end

