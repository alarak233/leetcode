/*
 * @lc app=leetcode.cn id=1592 lang=cpp
 *
 * [1592] 重新排列单词间的空格
 */

// @lc code=start
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    string reorderSpaces(string& text) {
        int blankNum=0;
        vector<vector<int>> orders;
        for(int i=0;i<text.size();){
            int start=i;
            while(i<text.size() && text[i]==' ')i++;
            blankNum+=(i-start);
            start=i;            
            while(i<text.size() && text[i]!=' ')i++;
            if(start<i)orders.push_back({start,i});
        }
        string ans="";
        if(orders.size()>1)blankNum=(blankNum)/(orders.size()-1);
        for(int i=0;i<orders.size()-1;i++){
            ans+=text.substr(orders[i][0],orders[i][1]-orders[i][0]);
            ans+=string(blankNum,' ');
        }
        ans+=text.substr((*(orders.end()-1))[0],(*(orders.end()-1))[1]-(*(orders.end()-1))[0]);
        if(text.size()>ans.size())ans+=string(text.size()-ans.size(),' ');
        return ans;
    }
};
// @lc code=end