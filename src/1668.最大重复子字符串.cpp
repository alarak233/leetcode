/*
 * @lc app=leetcode.cn id=1668 lang=cpp
 *
 * [1668] 最大重复子字符串
 */
#include<string>
#include<algorithm>
using namespace std;

// @lc code=start
class Solution {
public:
    int maxRepeating(string sequence, string word) {
        int ans=0;
        for(int i=0;i<sequence.size();i++){
            if(sequence[i]!=word[0])continue;
            for(int j=0;i+j<=sequence.size();j++){
                int t=j%word.size();
                if(i+j==sequence.size()||sequence[i+j]!=word[t]){
                    ans=max(ans,(int)(j/word.size()));
                    break;
                }
            }
        }
        return ans;
    }
};
// @lc code=end

