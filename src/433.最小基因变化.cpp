/*
 * @lc app=leetcode.cn id=433 lang=cpp
 *
 * [433] 最小基因变化
 */

// @lc code=start
#include<string>
#include<vector>
#include<unordered_set>
#include<queue>
using namespace std;

class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) {
        if(start==end)return 0;
        unordered_set<string> cnt;
        unordered_set<string> visit;
        for(auto s:bank)cnt.emplace(s);
        if(cnt.count(end)==0)return -1;

        queue<string> q;
        q.emplace(start);
        char a[4]={'A','C','G','T'};
        int step=1;
        while(!q.empty()){
            int sz = q.size();
            for (int i = 0; i < sz; i++) {
                string curr = q.front();
                q.pop();
                for (int j = 0; j < 8; j++) {
                    for (int k = 0; k < 4; k++) {
                        if (a[k] != curr[j]) {
                            string next = curr;
                            next[j] = a[k];
                            if (!visit.count(next) && cnt.count(next)) {
                                if (next == end) {
                                    return step;
                                }
                                q.emplace(next);
                                visit.emplace(next);
                            }
                        }
                    }
                }
            }
            step++;
        }
        return -1;        
    }
};
/**
 * 优化待补充
**/
// @lc code=end

