/*
 * @lc app=leetcode.cn id=1460 lang=cpp
 *
 * [1460] 通过翻转子数组使两个数组相等
 */

// @lc code=start
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_map<int,int> m;
        for(auto i:target){
            m[i]++;
        }
        for(auto i:arr){
            if(m.count(i)==0||m[i]==0)return false;
            m[i]--;
        }
        return true;
    }
};
// @lc code=end

