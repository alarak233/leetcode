/*
 * @lc app=leetcode.cn id=1282 lang=cpp
 *
 * [1282] 用户分组
 */

// @lc code=start
#include<vector>
#include<unordered_map>
using namespace std;
/*
class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> ans;
        vector<int> ansSize;
        int sign=0;
        for(int i=0;i<groupSizes.size();i++){
            if(groupSizes[i]==1){
                ans.push_back({i});
                ansSize.push_back(0);
                continue;
            }
            for(int j=0;j<ansSize.size();j++){
                if(groupSizes[i]==ansSize[j]){
                    ans[j].push_back(i);
                    if(ans[j].size()==ansSize[j])ansSize[j]=0;
                    sign=1;
                    break;
                }
            }
            if(sign){
                sign=0;
                continue;
            }
            ans.push_back({i});
            ansSize.push_back(groupSizes[i]);
        }
        return ans;
    }
};
*/
class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        unordered_map<int, vector<int>> groups;
        int n = groupSizes.size();
        for (int i = 0; i < n; i++) {
            int size = groupSizes[i];
            groups[size].emplace_back(i);
        }
        vector<vector<int>> groupList;
        for (auto &[size, people] : groups) {
            int groupCount = people.size() / size;
            for (int i = 0; i < groupCount; i++) {
                vector<int> group;
                int start = i * size;
                for (int j = 0; j < size; j++) {
                    group.emplace_back(people[start + j]);
                }
                groupList.emplace_back(group);
            }
        }
        return groupList;
    }
};

// @lc code=end

