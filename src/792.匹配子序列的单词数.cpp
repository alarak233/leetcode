/*
 * @lc app=leetcode.cn id=792 lang=cpp
 *
 * [792] 匹配子序列的单词数
 */

// @lc code=start
#include<vector>
#include<string>
#include<queue>
using namespace std;

class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        vector<queue<pair<int,int>>> qs(26);
        for(int i=0;i<words.size();i++){
            qs[words[i][0]-'a'].emplace(i,0);
        }
        int ans=0;
        for(char c:s){
            queue<pair<int,int>> &q=qs[c-'a'];
            int q_size=q.size();
            while (q_size--)
            {
                pair<int,int> p=q.front();
                q.pop();
                if(p.second+1==words[p.first].size())
                    ans++;
                else
                    qs[words[p.first][p.second+1]-'a'].emplace(p.first,p.second+1);
            }            
        }
        return ans;
    }
};
// @lc code=end

