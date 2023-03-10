/*
 * @lc app=leetcode.cn id=2379 lang=cpp
 *
 * [2379] 得到 K 个黑块的最少涂色次数
 */

// @lc code=start
#include<string>
#include<algorithm>
using namespace std;

class Solution {
public:
    int minimumRecolors(string& blocks, int& k) {
        int temp=0;
        for(int i=0;i<k;i++){
            if(blocks[i]=='W')temp++;
        }
        int ans=temp;
        for(int i=k;i<blocks.size();i++){
            if(blocks[i]=='W')temp++;
            if(blocks[i-k]=='W')temp--;
            ans=min(ans,temp);
        }
        return ans;
    }
};
// @lc code=end

